#include <stdio.h>

void extrems(int width){
    int i = 0;
    while (i < width){
        printf("* ");
        i ++;
    }
    printf("\n");
    
}

void medium(int width,int height){
    int ancho = 0, j=1;
    ancho = (width * 2) -3; 
    
    
    while (j < (height-1)){
        printf("*");
        for(int h =0; h< ancho;h++){
            printf(" ");
        }
        printf("*");
        printf("\n");
        j +=1;

    }
    
}


int main() {
    int width, height;
    scanf("%d", &width);
    scanf("%d", &height);
    
    extrems(width);
    medium(width, height);
    extrems(width);
    return 0;
}
