#include <stdio.h>

void Stars(){
    printf("*");
}

int main(){

    int stars, i, j;
    scanf("%d",&stars);

    for (i=1 ;i <= stars;i++){
        for(j=0;j<i;j++){
            Stars();
        }
        printf("\n");
        
    }

    return 0;
}