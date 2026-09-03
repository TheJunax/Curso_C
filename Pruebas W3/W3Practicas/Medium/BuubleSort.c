#include <stdio.h>

void ordenarArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Si el elemento actual es mayor que el siguiente, se intercambian
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numeros[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    ordenarArray(numeros, n);

    printf("Array ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}