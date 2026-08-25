#include <stdio.h>
struct perro 
{
    char nombre[30];
    int edadMeses;
    float peso;


}periquito = {"Kairo", 37, 2.2};
int main()
{
    printf("El nombre de mi mascota es %s, tiene %d meses y pesa %3.1f\n",periquito.nombre, periquito.edadMeses,periquito.peso);
    return 0;
}