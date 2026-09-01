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

void mostrarPorRango(Estudiante *lista,int edadMin, int edadMax, unsigned int cantidadEstudiantes){

    for(unsigned int i = 0; i < cantidadEstudiantes; i++){
        if(lista[i].edad >= edadMin && lista[i].edad <= edadMax){
            const char *genero = (lista[i].flags & 128) ? "Femenino" : "Masculino";
            printf("ID: %d || Nombre: %s || Edad: %d || Genero: %s\n", lista[i].id, lista[i].nombre, lista[i].edad, genero);
        }
    }
}

int main(int argc, char *argv[]){

    if(argc < 4){
        printf("Uso: %s <archivo.bin> <edad_min> <edad_max>\n", argv[0]);
        return 1;
    }
    int edadMin = atoi(argv[2]), edadMax = atoi(argv[3]);

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

    Estudiante *lista = leerLista(archivo, cantidadEstudiantes);
    if(lista == NULL){
        fclose(archivo);
        return 1;
    }

    mostrarPorRango(lista, edadMin, edadMax,cantidadEstudiantes);

    free(lista);
    fclose(archivo);
    return 0;
}