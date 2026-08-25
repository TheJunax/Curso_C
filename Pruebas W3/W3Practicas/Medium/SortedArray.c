#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) { 
    return *(int*)a - *(int*)b; 
}

int main() {
    int n;
    scanf("%d", &n);
    int numbers[100];
    for (int i = 0; i < n; i++) scanf("%d", &numbers[i]);

    // Reemplaza los dos for por qsort
    qsort(numbers, n, sizeof(int), cmp);

    for (int i = 0; i < n; i++) printf("%d ", numbers[i]);

    return 0;
}