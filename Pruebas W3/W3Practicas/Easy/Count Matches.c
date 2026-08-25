#include <stdio.h>

int main() {
    int n, target, count = 0;
    scanf("%d", &n);
    int numbers[100];
    
    for (int i = 0; i < n; i++){ 
        printf("Escriba el numero %i de su arreglo: ", i+1);
        scanf("%d", &numbers[i]);    
    }
    
    printf("Escriba el numero que desea buscar su repeticion: ");
    scanf("%d", &target);

    for(int j=0; j<n; j++){
        if(target == numbers[j]){
            count++;
        }
    }

    printf("Count: %d\n",count);

    return 0;
}
