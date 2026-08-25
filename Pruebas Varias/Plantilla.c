#include <stdio.h>

int main(){

// Crear
int *arr = NULL;
int cantidad = 0;
int capacidad = 3;
arr = malloc(capacidad * sizeof(int));
if (arr == NULL) {
return 1;
}
// Antes de insertar
if (cantidad == capacidad) {
int nueva_capacidad = capacidad * 2;
int *temp = realloc(arr, nueva_capacidad * sizeof(int));
if (temp == NULL) {
free(arr);
return 1;
}
arr = temp;
capacidad = nueva_capacidad;
}
// Insertar
arr[cantidad] = "valor";
cantidad++;
// Al final
free(arr);
}