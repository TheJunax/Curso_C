#include <stdio.h>

typedef struct {
        int id;
        unsigned char flags;
        char nombre[23];
        int edad;
    }Estudiante;

int main(int argc, char *argv[]) {
    // PASO 1: validar que pasaron el archivo
    if(argc < 2){
        printf("Uso: %s <sample_data.bin>\n", argv[0]);
        return 1;
    }

    // PASO 2: abrir en modo binario
    FILE *archivo = fopen(argv[1], "rb");
    if(archivo == NULL){
        printf("No pude abrir %s\n", argv[1]);
        return 1;
    }

    // PASO 3: leer el magic byte a byte
    unsigned char magic[2];
    size_t leidos = fread(magic, 2, 1, archivo);
    if(leidos != 1){
        printf("No pude leer el magic\n");
        fclose(archivo);
        return 1;
    }

    // PASO 4: validar el magic – TU PARTE
    if( magic[0] == 0xAA && magic[1] == 0xAE){
        printf("Magic valido\n");
    } else {
        printf("Magic invalido.\n");
        fclose(archivo);
        return 1;
    }

    // PASO 5: leer los 3 conteos – TU PARTE
    unsigned int student_count;
    size_t c1 = fread(&student_count, sizeof(unsigned int), 1, archivo);
    if(c1 != 1){
        printf("Error Leyendo student_count\n");
        fclose(archivo);
        return 1;
    }
    printf("Student count: %u\n", student_count);

    unsigned int course_count;
    size_t c2 = fread(&course_count, sizeof(unsigned int), 1, archivo);
    if(c2 != 1){
        printf("Error Leyendo course_count\n");
        fclose(archivo);
        return 1;
    }
    printf("Course Count: %u\n", course_count);

    unsigned int enrollment_count;
    size_t c3 = fread(&enrollment_count, sizeof(unsigned int), 1, archivo);
    if(c3 != 1){
        printf("Error Leyendo enrollment_count\n");
        fclose(archivo);
        return 1;
    }
    printf("Enrollment count: %u\n", enrollment_count);


    Estudiante *lista = (Estudiante*)malloc(student_count * sizeof(Estudiante));
    fread(lista, sizeof(Estudiante), student_count, archivo);


    fclose(archivo);
    return 0;
}