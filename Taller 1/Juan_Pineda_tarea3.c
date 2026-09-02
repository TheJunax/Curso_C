#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    unsigned char flags;
    //int genero;
    char nombre[23];
    int edad;
} Estudiante;

typedef struct {
    int id;
    char nombre[32];
    int horasCredito;
}Curso;

typedef struct {
    int idEstudiante;
    int idCurso;
    int año;
    int semestre;
}Matricula;

int leerEncabezado(FILE *archivo, unsigned int *cantidadEstudiantes,unsigned int *cantidadCursos, unsigned int *cantidadMatriculas){

    unsigned char magic[2];
    size_t leidos = fread(magic, 2, 1, archivo);
    if(leidos != 1){
        printf("No pude leer el magic\n");
        return 1;
    }

    if(magic[0] == 0xAA && magic[1] == 0xAE){
        printf("Magic valido\n");
    } else {
        printf("Magic invalido.\n");
        return 1;
    }

    leidos = fread(cantidadEstudiantes, sizeof(unsigned int), 1, archivo);
    if(leidos != 1){
        printf("Error leyendo Cantidad de Estudiantes\n");
        return 1;
    }
    printf("Cantidad De Estudiantes: %u\n", *cantidadEstudiantes);

    leidos = fread(cantidadCursos, sizeof(unsigned int), 1, archivo);
    if(leidos != 1){
        printf("Error leyendo Cantidad de Cursos\n");
        return 1;
    }
    printf("Cantidad De Cursos: %u\n", *cantidadCursos);

    leidos = fread(cantidadMatriculas, sizeof(unsigned int), 1, archivo);
    if(leidos != 1){
        printf("Error leyendo Cantidad de Materias\n");
        return 1;
    }
    printf("Cantidad De Materias: %u\n", *cantidadMatriculas);

    return 0;
}

Curso *leerCurso(FILE *archivo, unsigned int cantidadCursos){

    Curso *lista = (Curso*)malloc(cantidadCursos * sizeof(Curso));
    if(lista == NULL){
        printf("Error al asignar memoria\n");
        return NULL;
    }

    size_t leidos = fread(lista, sizeof(Curso), cantidadCursos, archivo);
    if(leidos != cantidadCursos){
        printf("Error leyendo el curso\n");
        free(lista);              
        return NULL;
    }
 
    return lista;
}

Matricula *leerMatricula(FILE *archivo, unsigned int cantidadMatriculas){

    Matricula *lista = (Matricula*)malloc(cantidadMatriculas * sizeof(Matricula));
    if(lista == NULL){
        printf("Error al asignar memoria\n");
        return NULL;
    }

    size_t leidos = fread(lista, sizeof(Matricula), cantidadMatriculas, archivo);
    if(leidos != cantidadMatriculas){
        printf("Error leyendo la Matricula\n");
        free(lista);              
        return NULL;
    }
 
    return lista;
}

Estudiante *leerLista(FILE *archivo, unsigned int cantidadEstudiantes){

    Estudiante *lista = (Estudiante*)malloc(cantidadEstudiantes * sizeof(Estudiante));
    if(lista == NULL){
        printf("Error al asignar memoria\n");
        return NULL;
    }

    size_t leidos = fread(lista, sizeof(Estudiante), cantidadEstudiantes, archivo);
    if(leidos != cantidadEstudiantes){
        printf("Error leyendo la lista\n");
        free(lista);              
        return NULL;
    }
 
    return lista;
}

void crearTabla(Estudiante *listaE, Matricula *listaM,
                unsigned int cantidadEstudiantes, unsigned int cantidadMatriculas){

    int idContado[1001];    // ids van 1..1000, usamos idContado[id]

    printf("Año\tSem\tH-Pre\tM-Pre\tH-Pos\tM-Pos\n");

    for(int año = 2020; año <= 2029; año++){
        for(int sem = 1; sem <= 4; sem++){

            // 1) reiniciar idContado
            for(int i = 0; i < 1001; i++) idContado[i] = 0;
            // 2) contadores de las 4 categorías
            int hPre = 0, mPre = 0, hPos = 0, mPos = 0;
            // 3) recorrer matrículas y filtrar por (año, sem)
            for(unsigned int m = 0; m < cantidadMatriculas; m++){
                if(listaM[m].año == año && listaM[m].semestre == sem){
                    int id = listaM[m].idEstudiante;
                    if(idContado[id] == 0){
                        //   - buscar el estudiante en listaE por su id
                    for (unsigned int e = 0; e < cantidadEstudiantes; e++) {
                        if (listaE[e].id == id) {
                    //   - leer flags: femenino = flags & 128, posgrado = flags & 64
                        int esFemenino = (listaE[e].flags & 128) != 0;
                        int esPosgrado = (listaE[e].flags & 64) != 0;

        //   - incrementar el contador correspondiente
                            if (esPosgrado) {
                                if (esFemenino) {
                                    mPos++;
                                } else {
                                    hPos++;
                                }
                            } else {
                                if (esFemenino) {
                                    mPre++;
                                } else {
                                    hPre++;
                                }
                            }

        //   - idContado[id] = 1;
                            idContado[id] = 1;
                            break; // Detiene la búsqueda una vez hallado el estudiante
                        }
                    }
                    }
                }
            }

            printf("%d\t%d\t%d\t%d\t%d\t%d\n", año, sem, hPre, mPre, hPos, mPos);
        }
    }
}


int main(int argc, char *argv[]){

    if(argc < 2){
        printf("Uso: %s <archivo.bin>\n", argv[0]);
        return 1;
    }

    FILE *archivo = fopen(argv[1], "rb");
    if(archivo == NULL){
        printf("No pude abrir %s\n", argv[1]);
        return 1;
    }

    unsigned int cantidadEstudiantes, cantidadCursos, cantidadMatriculas;

    if(leerEncabezado(archivo, &cantidadEstudiantes, &cantidadCursos, &cantidadMatriculas) != 0){
        fclose(archivo);
        return 1;
    }

    Estudiante *listaE = leerLista(archivo, cantidadEstudiantes);
    if(listaE == NULL){
        fclose(archivo);
        return 1;
    }

    Curso *listaC = leerCurso(archivo, cantidadCursos);
    if(listaC == NULL){
        fclose(archivo);
        return 1;
    }

    Matricula *listaM = leerMatricula(archivo, cantidadMatriculas);
    if(listaM == NULL){
        fclose(archivo);
        return 1;
    }

        crearTabla(listaE,listaM,cantidadEstudiantes,cantidadMatriculas);


    free(listaE);
    free(listaC);
    free(listaM);
    fclose(archivo);
    return 0;
}