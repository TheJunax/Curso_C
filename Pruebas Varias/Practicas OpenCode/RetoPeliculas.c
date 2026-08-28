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

void buscarporId(Pelicula *lista, int cantidad, int id){
    int encontro =1;
    for(int i =0; i<cantidad;i++){
        if(lista[i].id== id){
            printf("Pelicula con ID: %d Encontrada:\n", lista[i].id);
            printf("ID: %d | Año: %d | Duracion: %d | Titulo: %s | Precio: %.1f\n",
                lista[i].id, lista[i].año, lista[i].duracion, lista[i].titulo, lista[i].precio);
            encontro =0;
            break;
        }
    }
    if(encontro ==1){
        printf("Pelicula no encontrada\n");
    }
}

void actualizarDuracion(Pelicula *lista, int cantidad, int id, int duracion){
    int encontro =1;
    for(int i =0; i<cantidad;i++){
        if(lista[i].id== id){
            lista[i].duracion =  duracion;
            printf("Duracion de la pelicula actualizada con exito.\n");
            encontro =0;
            break;
        }
    }
    if(encontro == 1){
        printf(" Id de pelicula no encontrado\n");
    }
}

void eliminarPelicula(Pelicula **lista, int *cantidad, int id){
    int encontro = 1;
    for(int i =0; i<(*cantidad); i++){
        if((*lista)[i].id == id){
            printf("Pelicula a eliminar encontrada.\n");
            for(int j = i; j<(*cantidad)-1; j++){
                (*lista)[j].id = (*lista)[j+1].id;
                (*lista)[j].año = (*lista)[j+1].año;
                (*lista)[j].duracion = (*lista)[j+1].duracion;
                (*lista)[j].precio = (*lista)[j+1].precio;
                strcpy((*lista)[j].titulo,(*lista)[j+1].titulo); 
            }
            (*cantidad)--;
            encontro =0;
            break;
        }    
    }
    if(encontro == 1){
        printf("Id a eliminar no encontrado\n");
    }
}

float valorTotal(Pelicula *lista, int cantidad){
    float total =0;
    for(int i=0; i<cantidad;i++){
        total += lista[i].precio;
    }
    return total;
}

void imprimirVideoteca(Pelicula *lista, int cantidad){
    for(int i=0; i<cantidad; i++){
        printf("ID: %d | Año: %d | Duracion: %d | Titulo: %s | Precio: %.1f\n",
                lista[i].id, lista[i].año, lista[i].duracion, lista[i].titulo, lista[i].precio);
    }
}

void liberarMemoria(Pelicula ** lista, int *capacidad, int *cantidad){
    free(*lista);
    *lista = NULL;
    *capacidad =0;
    *cantidad =0;
}

int main(){
    Pelicula *lista = NULL;
    int capacidad =0;
    int cantidad =0;

    iniciarVideoteca(&lista, &capacidad, &cantidad);
    agregarPelicula(&lista, &capacidad, &cantidad, 1, 2021, 188,"End Game: Encore", 9000);
    agregarPelicula(&lista, &capacidad, &cantidad, 2, 2026, 122,"Coyote vs ACME", 9000);
    agregarPelicula(&lista, &capacidad, &cantidad, 3, 2027, 192,"Avengers Doomsday", 9000);
    agregarPelicula(&lista, &capacidad, &cantidad, 4, 2026, 168,"Spiderman Brand a New Day", 9000);
    imprimirVideoteca(lista, cantidad);

    buscarporId(lista, cantidad, 2);

    actualizarDuracion(lista, cantidad, 1, 146);
    imprimirVideoteca(lista, cantidad);

    eliminarPelicula(&lista, &cantidad, 2);
    imprimirVideoteca(lista, cantidad);

    float total = valorTotal(lista, cantidad);
    printf("El total del precio de las peliculas es: %1.1f\n", total);

    liberarMemoria(&lista, &capacidad, &cantidad);
    return 0;
}
