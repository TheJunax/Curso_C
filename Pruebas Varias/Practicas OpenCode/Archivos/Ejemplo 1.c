#include <stdio.h>

int main() {
    // 1. Abrir archivo
    FILE *archivo = fopen("datos.txt", "w");

    // 2. Verificar que se abrió bien
    if(archivo == NULL){
        printf("Error al abrir archivo\n");
        return 1;
    }

    // 3. Escribir
    fprintf(archivo, "Hola mundo\n");
    fprintf(archivo, "Numero: %d\n", 42);

    // 4. Cerrar
    fclose(archivo);

    return 0;
}