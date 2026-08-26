#include <stdio.h>
#include <string.h>

typedef struct {
    int dia, mes, año;
}Fecha;

typedef struct {
    char nombre[20];
    Fecha FechaEvento;
    int costo;
}Evento;

Evento crearEvento(Evento e1){
    strcpy(e1.nombre,"Juan");
    e1.FechaEvento.dia = 24;
    e1.FechaEvento.mes = 8;
    e1.FechaEvento.año = 2026;

    e1.costo = 1000000;
    return e1;
}

Evento crearEvento2(Evento e2){
    strcpy(e2.nombre,"Maria");
    e2.FechaEvento.dia = 8;
    e2.FechaEvento.mes = 2;
    e2.FechaEvento.año = 2027;

    e2.costo = 100000;
    return e2;
}


void mayorCosto(Evento *lista){
    int mayor= lista[0].costo, ind=0;
    if(lista[0].costo < lista[1].costo){
        mayor = lista[1].costo;
        ind = 1;
    }
    printf("El evento mas caro es el evento %d porque cuesta %d\n", ind+1, mayor);
    printf("Este evento se realizara el %d/%d/%d\n",lista[ind].FechaEvento.dia,lista[ind].FechaEvento.mes,lista[ind].FechaEvento.año);
    printf("Organizado por: %s\n", lista[ind].nombre);
}


int main(){
    Evento lista[2];

    lista[0] = crearEvento(lista[0]);
    lista[1] = crearEvento2(lista[1]);

    mayorCosto(lista);

    return 0;
}
