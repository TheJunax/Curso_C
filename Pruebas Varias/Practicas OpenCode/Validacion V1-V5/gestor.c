#include "gestor.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>


void limpiarBuffer(void){
    int c;
    while((c =getchar())!= '\n' && c != EOF);
}

void pausar(void){
    limpiarBuffer();
    printf("Presione Enter para continuar");
    getchar();
}

int agregarCalificacion(float *calificaciones, int *i){
    printf("Escriba la %i calificacion: ", (*i)+1);
    if(scanf("%f", &calificaciones[(*i)])!= 1){
        printf("Entrada invalida\n");
        limpiarBuffer();
    }
    else{
        if(*(calificaciones+(*i))>=0 && *(calificaciones+(*i)) <= 5){
            printf("Nota Agregada con exito \n");
            (*i)++;
            pausar();
        }else {
            printf("Nota invalida \n");
            return 1;
        }
    }
    return 0;
}

void mostrarCalificacion(float *calificaciones, int *i){
    if(*i > 0){
        for(int j=0; j<(*i);j++){
            printf("Su calificacion %d es: %1.1f\n", (j+1),*(calificaciones+j));
        }
    }else{
        printf("No hay calificaciones registrada\n");
    }
    pausar();
    
}
void Estadisticas(float *calificaciones, int *i){
    float prom=0, mayor=calificaciones[0], menor=calificaciones[0];
    if(*i>0){
        for(int j=0; j<(*i);j++){
            prom += (calificaciones[j]);
            if(mayor < calificaciones[j]){
                mayor = calificaciones[j];
            }
            if(menor > calificaciones[j]){
                menor = calificaciones[j];
            }
        }
        prom /= (float)(*i);

        printf("Su promedio es de: %1.1f\nSu mayor nota es de: %1.1f\nSu menor nota es de:%1.1f\n", prom, mayor, menor);
    }else{
        printf("No hay calificaciones registradas\n");
    }    
    pausar();

}
void buscarCalificacion(float *calificaciones, int *i){
    int indice=0;
    printf("Escriba el numero de la nota que quiere buscar: ");
    
    if(scanf("%i", &indice) == 1){
        if(indice>0 && indice <= (*i)){
            printf("Su nota %d es: %1.1f\n", indice, calificaciones[indice-1]);
        }else{
            printf("Posicion invalida\n");
        }
    }else{
        printf("Entrada invalida\n");
        limpiarBuffer();
    }
}
int ordenarCalificacion(float *calificaciones, int *i){
    float tempCalificaciones=0;

    for(int j=0; j<(*i);j++){
        for (int k = 0; k < (*i) - 1 - j; k++){
            if (calificaciones[k] > calificaciones[k + 1]) {
                tempCalificaciones = calificaciones[k];
                calificaciones[k] = calificaciones[k + 1];
                calificaciones[k + 1] = tempCalificaciones;
            }
        }
    }
    printf("Calificaciones ordenadas de menor a mayor, para verlas selecciones mostrar calificaciones\n");
    return *calificaciones;
}
int cambiarNombre(char *nombre, int tamaño){
    char tempNombre[tamaño];
    printf("Escriba su nuevo nombre\n");
    scanf("%s", tempNombre);
    strcpy(nombre, tempNombre);
    return *nombre;
}
void intercambiarCalificaciones(float *a, float *b){
    float temp = *a;
    *a = *b;
    *b = temp;
    printf("Notas Intercambiadas con Exito");
    limpiarBuffer();
}