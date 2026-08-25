#include <stdio.h>
/* cuenta los caracteres de la entrada; la. versión */
main( )
{
    long ac;

    ac = 0 ;
    while (getchar( ) != EOF)
        ++ ac;
    printf("\n%ld\n", ac);
}
