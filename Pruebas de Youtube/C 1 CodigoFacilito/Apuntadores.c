#include <stdio.h>
int cubo(int n);
int main()
{
    int num = 5;
    printf("Valor original: %i\n", num);
    num = cubo(num);
    printf("Valor al cubo: %i\n",num);
    return 0;
}
int cubo(int n)
{
    return n*n*n;
}