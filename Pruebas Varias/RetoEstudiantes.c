#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
  long id;
  char nombre[20];
  float notas[4];
  }Estudiante;

int inicializarEstudiante(Estudiante **lista, int *capacidad){
  *capacidad = 3;
  *lista = (Estudiante*)malloc((*capacidad) * sizeof(Estudiante));
  if(*lista == NULL){
    printf("Error al asignar memoria");
    return 1;
  }
  return 0;
}

int agregarEstudiante(Estudiante **lista, int *capacidad, int *cantidad, long id, char nombre[]){
  int nuevaCapacidad = (*capacidad) *2;
  Estudiante *tempLista = NULL;
  if(*capacidad == *cantidad){
    tempLista = (Estudiante*)realloc((*lista), nuevaCapacidad * sizeof(Estudiante));
    if(*lista == NULL){
      printf("Error al aumentar memoria");
      return 1;
    }
    *lista = tempLista;
    *capacidad = nuevaCapacidad;
  }
  (*lista)[(*cantidad)].id = id;
  strcpy((*lista)[(*cantidad)].nombre, nombre);
  float notas=0;
  for(int i=0;i<4; i++){
    printf("Escriba la nota %d del estudiante %s: \n", i+1, nombre);
    scanf("%f",&notas);
    (*lista)[(*cantidad)].notas[i] = notas;  
  }
  return 0;
}

void mostrarEstudiantes(Estudiante *lista, int cantidad){
  for(int i = 0; i<cantidad; i++){
    for(int j=0; j<4; j++){
      printf("%ld %s\nNotas: ", lista[i].id, lista[i].nombre); 
      printf("%1.1f ", lista[i].notas[j]);
    }
    printf("\n");
  }
}

void liberarLista(Estudiante **lista, int*capacidad, int *cantidad){
  free(*lista);
  *lista =NULL;
  *capacidad = 0;
  *cantidad =0;
}

int main(){
  Estudiante *lista=NULL;
  int capacidad = 0;
  int cantidad = 0;
  
  inicializarEstudiante(&lista, &capacidad);
  agregarEstudiante(&lista, &capacidad, &cantidad, 10667173738, "Juan Pablo");
  mostrarEstudiantes(lista, cantidad);
  liberarLista(&lista, &capacidad, &cantidad);
  
  return 0;
}

 

