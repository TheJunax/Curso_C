#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "gym.h"

int main(){
    Gym *persona = NULL;
    int capacidad = 0;
    int cantidad = 0;

    inicializarGym(&persona, &capacidad, &cantidad);

    agregarMiembro(&persona, &capacidad, &cantidad, 10067587908, "Messi Hernandez","Basico", 80000, 1);
    mostarMiembros(persona, cantidad);
    liberarGym(&persona, &capacidad, &cantidad);

    return 0;
}
