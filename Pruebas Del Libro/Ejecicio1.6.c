#include <stdio.h>

int main() {
    int resultado;
    
    printf("Escribe un caracter (o Ctrl+D / Ctrl+Z para EOF): ");
    resultado = (getchar() != EOF);
    
    printf("\nEl resultado de la expresion es: %d\n", resultado);
    
}