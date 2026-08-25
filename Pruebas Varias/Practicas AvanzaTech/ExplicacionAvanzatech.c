#include <stdio.h>
#include <stdlib.h>
int main() {

    int *lista = NULL;
    int cantidad = 0;
    int capacidad = 3;
    
    lista = malloc(capacidad * sizeof(int));
    
    if (lista == NULL) {
        printf("Error reservando memoria.\n");
        return 1;
    }
    
    for (int i = 1; i <= 8; i++) {
    
        if (cantidad == capacidad) {
            int nueva_capacidad = capacidad * 2;
            int *temp = realloc(lista, nueva_capacidad * sizeof(int));
    
            if (temp == NULL) {
                printf("Error agrandando memoria.\n");
                free(lista);
                return 1;
            }
            lista = temp;
            capacidad = nueva_capacidad;
        }
        lista[cantidad] = i * 10;
        cantidad++;
    }

    for (int i = 0; i < cantidad; i++) {
        printf("%d ", lista[i]);

    }
    free(lista);
    return 0;
}