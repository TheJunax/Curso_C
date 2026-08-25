#include <stdio.h>
#include <stdlib.h>

int filtrar_pares(const int *origen, int cantidad) {
    int *newArray, j=0;
    int capacidad = cantidad ,nueva_capacidad =0;

    newArray = malloc(capacidad * sizeof(int));
    if(newArray==NULL){
        printf("Error reservando memoria.\n");
        return 1;
    }

    for(int i=0; i< cantidad;i++){
        if((origen[i] %2) == 0){
            newArray[j] = origen[i];
            nueva_capacidad ++;
            j++;
        }
    }
    if(nueva_capacidad < cantidad ){
        int *temp = realloc(newArray, nueva_capacidad * sizeof(int));
        if(temp ==NULL){
            printf("Error al guardar la nueva memoria");
            return 1;
        }
        newArray = temp;
        cantidad = nueva_capacidad;
    }
    printf("El nuevo arreglo es: ");
    for(int i=0; i< cantidad; i++){
        printf("%d ", newArray[i]);
    }
    free(newArray);
    return 0;
}

int main() {
    int cantidad=0,capacidad=4;
    printf("Cantidad de elementos: ");
    scanf("%d", &cantidad);
    int *origen;
    origen = malloc(capacidad * sizeof(int));
    if(origen==NULL){
        printf("Error reservando memoria.\n");
        return 1;
    }
    for(int i =0; i<cantidad; i++){
        if(i == capacidad){
            int nueva_capacidad = capacidad *2;
            int *temp = realloc(origen, nueva_capacidad * sizeof(int));
            
            if(temp ==NULL){
                printf("Error al agrandar la memoria\n");
                free(origen);
                return 1;
            }
            origen = temp;
            capacidad = nueva_capacidad;
        }
        printf("Ingrese el elemento %d: ", i+1);
        scanf("%d",&origen[i]);
        
    }
    filtrar_pares(origen, cantidad);
    free(origen);

    return 0;
}