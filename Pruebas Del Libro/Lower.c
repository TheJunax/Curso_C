#include <stdio.h>

main()
{
    char palabraMayus;

    printf("Escriba: ");
    palabraMayus = getchar();
    palabraMayus = (palabraMayus >= 'A' && palabraMayus <= 'Z') ? (palabraMayus + 'a'- 'A') : palabraMayus;
    printf("%c\n",palabraMayus);
}