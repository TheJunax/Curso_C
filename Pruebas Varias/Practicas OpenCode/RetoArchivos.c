#include <stdio.h>

int guardarDatos(){
    FILE *f = fopen("calificaciones.txt", "w");
    if(f ==NULL){
        printf("Error\n");
        return 1;
    }
    fputs("Juan 4.5 3.0 5.0\n",f);
    fputs("Maria 5 4.8\n",f);
    fclose(f);
    
    return 0;
}
typedef struct {
    char nombre[20];
    float nota[3];
}ListaEstudiante;

ListaEstudiante agregarALista(FILE *f,ListaEstudiante e){
    char buffer[100];
    fgets(buffer,100,f);
    sscanf(buffer,"%s %f %f %f", e.nombre, &(e.nota[0]),&(e.nota[1]), &(e.nota[2]) );
    return e;
}

int cargarDatos(){
    ListaEstudiante lista[4]; //Pasarlo a memoria dinamica despues
    FILE *f = fopen("calificaciones.txt","r");
    if(f == NULL){
        printf("Error\n");
        return 1;
    }

    for(int i =0; i<2; i++){
        lista[i] = agregarALista(f,lista[i]);
    }
    for(int i =0; i<2;i++){
        printf("%s tiene estas notas: %f %f %f\n", lista[i].nombre,lista[i].nota[0],lista[i].nota[1],lista[i].nota[2]);    
    }
    return 0;
}

int main(){
    guardarDatos();
    cargarDatos();
    return 0;
}