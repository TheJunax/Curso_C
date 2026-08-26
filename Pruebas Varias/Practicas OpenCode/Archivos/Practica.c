#include <stdio.h>
/*
int main(){
    FILE *f = fopen("contactos.txt", "w");
    if(f == NULL){
        printf("Error\n");
        return 1;
    }
    fprintf(f,"Juan 3905996767\n");
    fprintf(f,"Maria 3105670802\n");
    fclose(f);
    return 0;
}
*/
int main(){
    FILE *f = fopen("contactos.txt", "a");
    if(f == NULL){
        printf("Error\n");
        return 1;
    }
    fprintf(f,"messi 3153250707\n");
    fclose(f);

    FILE *f2 = fopen("contactos.txt", "r");

    char nombre[10];
    long cel;
    while(fscanf(f2,"%s %ld",nombre, &cel) == 2){
        printf("Leido: el cel de %s es: %ld\n",nombre, cel);
    }
    fclose(f2);
    return 0;
}
    