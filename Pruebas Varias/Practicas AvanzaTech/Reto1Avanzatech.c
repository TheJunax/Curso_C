#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

void reverseArray(int arreglo[], int tamaño){
    int n = tamaño;
    for (int i = 0; i < tamaño / 2; i++) {
        int temp = arreglo[i];
        arreglo[i] = arreglo[n - 1 - i];
        arreglo[n - 1 - i] = temp;
    }
}

void printArray(int arreglo[], int tamaño){
    for(int i=0;i<tamaño;i++){
        printf("%d ", arreglo[i]);
    }

}

int main(){
    int *arreglo = NULL;
    int tamaño = 5;
    arreglo = (int*)malloc(tamaño* sizeof(int));
    if(arreglo ==NULL){
        printf("Error Reservando Memoria");
        return 1;
    }
    /*for(int i=0;i<tamaño;i++){
        printf("Escriba el elemento %i: ",i+1);
        scanf("%d", &arreglo[i]);
    }*/
    arreglo[0] = 10;
    arreglo[1] = 20;
    arreglo[2] = 30;
    arreglo[3] = 40;
    arreglo[4] = 50;
    //Arreglo original
    printf("Arreglo original : ");
    printArray(arreglo, tamaño);
    printf("\n");

    //Cambiar tamaño a 7
    int nuevo_tamaño = 7;
    int *temp = realloc(arreglo, nuevo_tamaño * sizeof(int));
    if(temp == NULL){
        printf("Error al agrandar memoria");
        return 1;
    }
    /*for(int i = tamaño;i< nuevo_tamaño; i++){
        printf("Escriba el elemento %i: ",i+1);
        scanf("%d", &temp[i]);
    }*/
    arreglo = temp;
    tamaño = nuevo_tamaño;
    arreglo[5] = 60;
    arreglo[6] = 70;

    printf("Arreglo después de cambiar el tamaño: ");
    printArray(arreglo, tamaño);
    printf("\n");

    //invertir arreglo
    printf("Arreglo invertido: ");
    reverseArray(arreglo, tamaño);
    printArray(arreglo, tamaño);
    printf("\n");

    //Intercambiar dos elementos
    printf("Arreglo despues del intercambio: ");
    swap(&arreglo[1],&arreglo[3]);
    printArray(arreglo, tamaño);
    printf("\n");

    free(arreglo);
    return 0;
}