#include <stdio.h>
#include <string.h>

typedef struct {
        char nombre[30];
        float promedio;
    }Estudiante;

Estudiante crearEstudiante(Estudiante ei){

        printf("Escriba el nombre del estudiante: ");
        scanf("%s", ei.nombre);
        printf("Escriba el promedio del estudiante: ");
        scanf("%f", &(ei.promedio));
    
    return ei;
}

void mostrarEstudiante(Estudiante ei){
        printf("El estudiante %s tiene un promedio de  %1.1f\n", ei.nombre, ei.promedio);
    
}
void mejorarPromedio(Estudiante *lista){
    char estBonus[30];
    float bonus =0.5;
    printf("Escriba el nombre del estudiante que quiere aumentar el promedio\n");
    scanf("%s", estBonus);
    for(int i=0;i<3;i++){
        if(strcmp(lista[i].nombre, estBonus)== 0){
            lista[i].promedio += bonus;
        }
    }
}

void mayorPromedio(Estudiante *lista){
    float mayorProm=0;
    int ind=0;
    for(int f=0; f<3; f++){
        if(mayorProm< lista[f].promedio){
            mayorProm = lista[f].promedio;
            ind = f;
        }
    }
    printf("El estudiante con mayor promedio es: %s", lista[ind].nombre);
    printf("\nCon un promedio de: %1.1f\n", mayorProm);
}

int main(){
    Estudiante lista[3];
    int opcion=0;
    do{
        printf("1. Crear 3 Estudiantes\n2. Mostrar los estudiantes\n3. Mostrar el estudiante con mayor promedio\n4. Otorgar Bonus\n5. Salir\n");
        scanf("%d", &opcion);
        switch(opcion){
        case 1:
            for(int i=0; i<3; i++){
                lista[i] = crearEstudiante(lista[i]);
            }
            break;
        case 2:
            for(int i =0; i<3; i++){
                mostrarEstudiante(lista[i]);
            }
            break;
        case 3:
            mayorPromedio(lista);
            break;

        case 4:
            mejorarPromedio(lista);
            break;
        case 5:
            printf("Chao");
        }
        
    }while(opcion!=5);
    return 0;
}
