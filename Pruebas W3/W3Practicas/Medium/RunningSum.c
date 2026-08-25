#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int numbers[100];
    for (int i = 0; i < n; i++) scanf("%d", &numbers[i]);
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += numbers[i];
        printf("%d ", total);

    }
    return 0;
}