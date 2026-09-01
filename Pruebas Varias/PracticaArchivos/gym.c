#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "gym.h"

void inicializarGym(Gym **persona, int *capacidad, int *cantidad){
    *capacidad = 3;
    *cantidad = 0;
    *persona = (Gym*)malloc((*capacidad) * sizeof(Gym));
    if(*persona == NULL){
        printf("Error al asignar memoria");
        return;
    }
}

int agregarMiembro(Gym **persona,int *capacidad, int *cantidad, long cedula, char nombre[], char plan[], float precio, int mesesPagados){
    Gym *tempLista = NULL;
    int nuevaCapacidad = *capacidad *2;
    if((*capacidad) == (*cantidad)){
        tempLista = (Gym*)realloc((*persona), nuevaCapacidad * sizeof(Gym));
        if(tempLista == NULL){
            printf("Error al agrandar memoria");
            return 1;
        }
        *persona = tempLista; 
        *capacidad = nuevaCapacidad;
    }
    (*persona)[(*cantidad)].cedula = cedula;
    (*persona)[(*cantidad)].precio = precio;
    (*persona)[(*cantidad)].mesesPagados = mesesPagados;
    strcpy((*persona)[(*cantidad)].nombre, nombre);
    strcpy((*persona)[(*cantidad)].plan, plan);

    (*cantidad)++;
    return 0;
}

void mostarMiembros(Gym *persona, int cantidad){
    for(int i=0; i<cantidad; i++){
        char plan[20], nombre[40];
        long cedula = persona[i].cedula;
        float precio =persona[i].precio;
        int mesesPagados = persona[i].mesesPagados;
        strcpy(plan,persona[i].plan);
        strcpy(nombre,persona[i].nombre); 

        printf("CC: %ld || Nombre: %s || Plan: %s || Precio: %.1f || Meses Pagados: %i\n",cedula, nombre, plan, precio, mesesPagados);
    }
}

void liberarGym(Gym **persona, int *capacidad, int *cantidad){
    free(*persona);
    *persona = NULL;
    *cantidad = 0;
    *capacidad =0;
}