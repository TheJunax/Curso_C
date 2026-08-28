#include <stdio.h>
#include <stdbool.h>   // <-- nos trae bool, true y false (desde C99)

int main(void) {
    // Declarar una variable booleana
    bool encendido = true;

    // Los booleanos se usan directo en condiciones
    if (encendido) {
        printf("El dispositivo está ENCENDIDO\n");
    } else {
        printf("El dispositivo está APAGADO\n");
    }

    // Un booleano se puede imprimir como número (1 = true, 0 = false)
    printf("encendido = %d\n", encendido);

    // También podemos guardar el resultado de una comparación
    int edad = 20;
    bool esMayor = (edad >= 18);
    printf("edad = %d, esMayor = %d\n", edad, esMayor);

    // Y negarlo con el operador !
    bool apagado = !encendido;
    printf("apagado = %d\n", apagado);

    return 0;
}
