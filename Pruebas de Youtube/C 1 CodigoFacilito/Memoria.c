#include <stdio.h>
#include <stdlib.h>

void ejemploMemoria() {
// 1. Memoria en el STACK (automática)
    int valorStack = 10;
    printf("Valor en Stack: %d\n", valorStack);
// Esta variable se destruye automáticamente al finalizar esta función.

// 2. Memoria en el HEAP (dinámica)
    int *ptrHeap = (int*)malloc(sizeof(int));
    if (ptrHeap != NULL) {
        *ptrHeap = 20;
    printf("Valor en Heap: %d\n", *ptrHeap);

// Es obligatorio liberar la memoria dinámica manualmente
    free(ptrHeap);
}
}

int main() {
ejemploMemoria();
return 0;
}
