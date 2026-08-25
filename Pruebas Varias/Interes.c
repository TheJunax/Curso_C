/*Variables: 
    dinero depositado (capital inicial): money (int)
    porcentaje de interes: porcenInteres
    interes: interes (float)
    tipo de interes: typeInteres ( string)
    tiempo de interes (meses): timeInteres (int)

Calcular:
    interes 
    */

#include <stdio.h>

int Interes(int capInicial,int timeInteres,int typeInteres){
    float porcenInteres=3, interes =0, tempCapInicial=capInicial;
    
    switch (typeInteres){
    case 1:
        for(int i=0; i<timeInteres; i++){
            interes += (float)(capInicial*porcenInteres/100);
        }
        interes += capInicial;
        return interes;
        
    case 2:
        for(int j=0; j<timeInteres; j++){
            interes += (tempCapInicial*porcenInteres/100);
            tempCapInicial += interes;
        }
        interes += capInicial;
        return interes;
    
    default:
        printf("Opcion invalida \n");
        break;
    }
    return 0;
}

int main(){
    int capIncial=0, timeInteres=0, typeInteres =0;

    printf("Ingrese el capital incial: ");
    scanf("%i",&capIncial);
    printf("Ingrese el tiempo en meses a generar intereses: ");
    scanf("%i",&timeInteres);
    printf("Ingrese el tipo de interes: (1 o 2) \n");
    printf("1. Interes Simple \n2. Interes compuesto \n");
    scanf("%i",&typeInteres);

    //Interes(capIncial, timeInteres,typeInteres);

    printf("El monto final pasados %i meses sera de: %i\n", timeInteres, Interes(capIncial, timeInteres,typeInteres));
    
    return 0;
}
