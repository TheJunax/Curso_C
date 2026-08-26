#include <stdio.h>
int main()
{
    int dato = 50;
    int *a = &dato;
    int *b = &dato;
    *a -= 10;
    *b -= 5;
    printf("%d\n", dato);
}