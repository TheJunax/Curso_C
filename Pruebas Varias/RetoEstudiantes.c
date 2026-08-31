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
    if(tempLista == NULL){
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
    if(notas <=5 && notas >=0){
      (*lista)[(*cantidad)].notas[i] = notas;  
    }
    else{
      printf("La nota debe ser de 0 a 5, intente de nuevo\n");
      i--;
    }
  }
  (*cantidad)++;
  return 0;
}

void mostrarEstudiantes(Estudiante *lista, int cantidad){
  for(int i = 0; i<cantidad; i++){
    printf("CC: %ld Nombre: %s\nNotas: ", lista[i].id, lista[i].nombre);
    for(int j=0; j<4; j++){ 
      printf("%1.1f ", lista[i].notas[j]);
    }
    printf("\n");
  }
}

void buscarPorId(Estudiante *lista, int cantidad, long id){
  int encontro=1;
  for(int i =0; i<cantidad; i++){
    if(lista[i].id == id){
      printf("Estudiante Encontrado\n");
      printf("CC: %ld Nombre: %s\nNotas: ", lista[i].id, lista[i].nombre);
      for(int j=0; j<4; j++){ 
        printf("%1.1f ", lista[i].notas[j]);
      }
      printf("\n");
      encontro =0;
      break;
    }
  }
  if(encontro ==1){
    printf("Estudiante NO encontrado");
    }
}

void eliminarPorId(Estudiante **lista, int *cantidad, long id){
  int encontro=1;
  for(int i =0; i<(*cantidad); i++){
    if((*lista)[i].id == id){
      for(int j=i; j<(*cantidad)-1; j++){
        (*lista)[j].id = (*lista)[j+1].id;
        strcpy((*lista)[j].nombre, (*lista)[j+1].nombre);
        for(int k=0; k<4;k++){
        (*lista)[j].notas[k] = (*lista)[j+1].notas[k];
        }
      }
      printf("Estudiante Eliminado con exito\n");
      (*cantidad)--;
      encontro =0;
      break;
    }
  }
  if(encontro ==1){
    printf("Estudiante NO encontrado\n");
    }
}

void contarAprobados(Estudiante *lista, int cantidad){
  float promedio[cantidad]; 
  int posAprobados[cantidad];
  int ind=0;
  for(int i =0; i<cantidad; i++){
    promedio[i] = 0;
    for(int k=0; k<4;k++){
      promedio[i] += lista[i].notas[k];
      }
    promedio[i] = (float)promedio[i] /4;
  }
  for(int i =0; i<cantidad; i++){
    if(promedio[i] >= 3 && promedio[i] <=5){
      posAprobados[ind] = i;
      ind++;
    }
  }
  printf("Los Estudiantes Aprobados son:\n");
    for(int i =0; i < ind; i++){
      int j = posAprobados[i];
      printf("%s\n", lista[j].nombre);
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
  int opcion = 0;
  printf("Menú de Opciones Notas Estudiantes: \n");
  
  inicializarEstudiante(&lista, &capacidad);
  do{
    printf("1. Agregar estudiante\n2. Mostrar Lista de Estudiantes\n3. Buscar Por ID\n4. Eliminar Estudiante\n5. Mostrar Estudiantes Aprobados\n6. Salir\n");
    int resultado = scanf("%d", &opcion);
    if(resultado == EOF){
      break;    
    }
    if(resultado == 0){
      while(getchar() != '\n');
      continue;
    }
    switch (opcion){
      case 1:
        char agregarNombre[30];
        long agregarId= 0;
        while(getchar() != '\n');
        printf("Escriba el nombre del Estudiante: ");
        fgets(agregarNombre, 30, stdin);
        agregarNombre[strcspn(agregarNombre,"\n")] = '\0';
        printf("\nEscriba el Id de %s: \n", agregarNombre);
        scanf("%ld", &agregarId);
        
        agregarEstudiante(&lista, &capacidad, &cantidad,agregarId, agregarNombre);
        break;
      case 2:
        mostrarEstudiantes(lista, cantidad);
        break;
      case 3:
        buscarPorId(lista,cantidad,10667173738);
        break;
      case 4:
        eliminarPorId(&lista, &cantidad, 10667173738);
        break;
      case 5:
        contarAprobados(lista, cantidad);
        break;
      case 6:
        printf("Chaoo\n");
        break;
      default:
        printf("Opción invalida");
        break;  
    }
  }while(opcion != 6);
  
  liberarLista(&lista, &capacidad, &cantidad);
  return 0;
}

 

