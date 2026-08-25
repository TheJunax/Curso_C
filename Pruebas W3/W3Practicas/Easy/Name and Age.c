#include <stdio.h>

int main(){
    
    int age;
    char name[20]; 
    

    printf("Escriba su nombre: \n");
    scanf("%s",name);
    printf("Escriba su Edad: \n");
    scanf("%i",&age);

    printf("Hola %s vas a cumplir %d el proximo año\n", name, age+1);
    return 0;
}
