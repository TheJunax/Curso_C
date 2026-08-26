#include <stdio.h>

int main() {
    // ESCRIBIR
    FILE *f = fopen("notas.txt", "w");
    if(f == NULL){
        printf("Error\n");
        return 1;
    }

    fprintf(f, "Juan 4.5\n");
    fprintf(f, "Maria 4.8\n");
    fprintf(f, "Messi 4.1\n");
    fclose(f);

    // LEER
    FILE *f2 = fopen("notas.txt", "r");
    if(f2 == NULL){
        printf("Error\n");
        return 1;
    }

    char nombre[30];
    float nota;
    while(fscanf(f2, "%s %f", nombre, &nota) == 2){
        printf("Leido: %s tiene nota %.1f\n", nombre, nota);
    }
    fclose(f2);

    return 0;
}