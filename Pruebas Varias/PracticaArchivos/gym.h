#ifndef GYM_H
#define GYM_H

typedef struct{
    long cedula;
    char nombre[40];
    char plan[20];
    float precio;
    int mesesPagados;
}Gym;

void inicializarGym(Gym **persona, int *capacidad, int *cantidad);
int agregarMiembro(Gym **persona,int *capacidad, int *cantidad, long cedula, char nombre[], char plan[], float precio, int mesesPagados);
int buscarMiembro(Gym *persona, int cantidad, long id);
int eliminarMiembro(Gym **persona, int *cantidad, long id);
void mostarMiembros(Gym *persona, int cantidad);
void Estadisticas(Gym *persona, int cantidad);
void liberarGym(Gym **persona, int *capacidad, int *cantidad);

#endif 
