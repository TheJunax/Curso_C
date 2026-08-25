#include <stdio.h>
#define length 2

struct owner
{
    char nombre[20];
    char direccion[30];
};

struct dog
{
    char nombre[20];
    int edadMeses;
    struct owner ownerDog;
}dogs[length];

int main()
{
    for (int i = 0; i < length; ++i)
    {
        printf("Nombre del Perro\n");
        scanf("%s",dogs[i].nombre);
        printf("Edad del perro en meses\n");
        scanf("%i",&dogs[i].edadMeses);
        printf("nombre del Dueño\n");
        scanf("%s",dogs[i].ownerDog.nombre);
        printf("dirección\n");
        scanf("%s",dogs[i].ownerDog.direccion);
        printf("\n");
    }

    for (int i = 0; i < length; ++i)
    {
        printf("Nombre del Perro: %s\n", dogs[i].nombre);
        printf("Edad del perro en meses: %i\n", dogs[i].edadMeses);
        printf("Nombre del Dueño: %s\n", dogs[i].ownerDog.nombre);
        printf("Dirección: %s\n", dogs[i].ownerDog.direccion);
        printf("\n");
    }

    return 0;
}