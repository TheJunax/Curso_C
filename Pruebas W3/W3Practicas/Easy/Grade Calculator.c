#include <stdio.h>

int main(){

    int score;
    scanf("%d", &score);

    if(score<60){
        printf("F\n");
    }else if(score <= 69 && score >= 60){
        printf("D\n");
    }else if(score <= 79 && score >= 70){
        printf("C\n");
    }else if(score <= 89 && score >= 80){
        printf("B\n");
    }else if(score >= 90 ){
        printf("A\n");
    }else{
        printf("Numero ingresado incorrecto");
    }

}