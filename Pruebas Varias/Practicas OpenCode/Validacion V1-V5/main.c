#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "gestor.h"
#define MAX_SIZE 10

int main(){
    int opcion=0, i =0;
    char nombre[20];
    float *calificaciones= NULL;
    int tamaño = MAX_SIZE;
    calificaciones = (float*)malloc(tamaño*sizeof(float));
    if(calificaciones==NULL){
        printf("Eror al reservar espacio");
        return 1;
    }
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);

    printf("\n==================================================\nGESTOR DE CALIFICACIONES\nEstudiante: %s\n==================================================", nombre);
    do{
        printf("\n1. Agregar calificación \n2. Mostrar calificaciones\n3. Estadísticas (promedio / mayor / menor)\n4. Buscar calificación\n5. Ordenar calificaciones\n6. Cambiar nombre del estudiante\n7. Salir\n");

        //scanf("%d", &opcion);
        if(scanf("%d", &opcion)!=1){
            limpiarBuffer();
            printf("Entrada invalida, intente de nuevo\n");
            continue;
        }
        switch (opcion){
        case 1:
            agregarCalificacion(calificaciones, &i);        
            break;
        case 2:
            mostrarCalificacion(calificaciones, &i);
            break;
        case 3:
            Estadisticas(calificaciones, &i);
            break;
        case 4:
            buscarCalificacion(calificaciones, &i);
            break;
        case 5:
            ordenarCalificacion(calificaciones, &i);
            break;
        case 6:
            cambiarNombre(nombre, tamaño); 
            break;
        case 7:
            printf("Chaoo\n");
            break;
        default:
            printf("Opcion Incorrecta intente de nuevo \n");
        }
    }while(opcion !=7);
    free(calificaciones);
    return 0;
}
