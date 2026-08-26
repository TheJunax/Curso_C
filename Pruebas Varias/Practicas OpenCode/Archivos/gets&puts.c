#include <stdio.h>

int main() {
    // ESCRIBIR con fputs
    FILE *f = fopen("nombres.txt", "w");
    if(f == NULL){ printf("Error\n"); return 1; }

    fputs("Juan Pineda\n", f);
    fputs("Maria Narvaez\n", f);
    fputs("Messi Hernandez\n", f);
    fclose(f);

    // LEER con fgets
    FILE *f2 = fopen("nombres.txt", "r");
    if(f2 == NULL){ printf("Error\n"); return 1; }

    char linea[100];
    int num = 1;
    while(fgets(linea, 100, f2) != NULL){
        printf("%d. %s", num, linea);
        num++;
    }
    fclose(f2);

    return 0;
}