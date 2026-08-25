#include <stdio.h>

int suma();
int main()
{
    int num1,num2;
    printf("Ingresa el primer valor\n");
    scanf("%i",&num1);
    printf("Ingresa el segundo valor\n");
    scanf("%i",&num2);
    printf("El resultado es: %i\n",suma(num1,num2));
    
}
int suma(int num1, int num2)
{
    int suma = num1 + num2;
    return suma;
}