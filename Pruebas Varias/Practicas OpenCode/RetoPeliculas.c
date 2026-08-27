#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int id, año, duracion;
    char titulo[50];
    float precio;
}Pelicula;

int iniciarVideoteca(Pelicula **lista, int *capacidad, int *cantidad){
    *capacidad =3;
    *cantidad =0;
    *lista = (Pelicula*)malloc((*capacidad) * sizeof(Pelicula));
    if(*lista ==NULL){
        printf("Error al asignar memoria\n");
        return 1;
    }
    return 0;
}

void agregarPelicula(Pelicula **lista,int *capacidad,int *cantidad, int id, int año, int duracion, char titulo[], float precio){
    Pelicula *tempLista =NULL;
    int nuevaCapacidad = (*capacidad)*2;
    if(*capacidad == *cantidad){
        tempLista = (Pelicula*)realloc(*lista, nuevaCapacidad * sizeof(Pelicula));
        if(tempLista ==NULL){
            printf("Error al agrandar memoria\n");
        }
        *lista = tempLista;
        *capacidad = nuevaCapacidad;
    }
    (*lista)[*cantidad].id = id;
    (*lista)[*cantidad].año = año;
    (*lista)[*cantidad].duracion = duracion;
    (*lista)[*cantidad].precio = precio;
    strcpy((*lista)[*cantidad].titulo,titulo); 
    (*cantidad)++;
}

void imprimirVideoteca(Pelicula *lista, int cantidad){
    for(int i=0; i<cantidad; i++){
        printf("ID: %d | Año: %d | Duracion: %d | Titulo: %s | Cantidad: %.1f\n",
                lista[i].id, lista[i].año, lista[i].duracion, lista[i].titulo, lista[i].precio);
    }
}

int main(){
    Pelicula *lista = NULL;
    int capacidad =0;
    int cantidad =0;

    iniciarVideoteca(&lista, &capacidad, &cantidad);
    agregarPelicula(&lista, &capacidad, &cantidad, 1, 2026, 124,"End Game: Encore", 9000);
    imprimirVideoteca(lista, cantidad);
}