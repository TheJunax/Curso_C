#include <stdio.h>

int main() {
    int width, height, i =0, j= 1, ancho = 0, h;
    scanf("%d", &width);
    scanf("%d", &height);

	while (i < width){
        printf("* ");
        i ++;
    }
    printf("\n");
    i = 0;

    ancho = (width * 2) -3; 
    
    
    while (j < (height-1)){
        printf("*");
        for(h =0; h< ancho;h++){
            printf(" ");
        }
        printf("*");
        printf("\n");
        j +=1;

    }
    
    while (i < width){
        printf("* ");
        i ++;
    }
    
  	return 0;
}

