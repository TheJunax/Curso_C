#ifndef GESTOR_H
#define GESTOR_H

int agregarCalificacion(float *calificaciones, int *i);
void mostrarCalificacion(float *calificaciones, int *i);
void Estadisticas(float *calificaciones, int *i);
void limpiarBuffer(void);
void pausar(void);
void buscarCalificacion(float *calificaciones, int *i);
int ordenarCalificacion(float *calificaciones, int *i);
int cambiarNombre(char *nombre, int tamaño);

#endif