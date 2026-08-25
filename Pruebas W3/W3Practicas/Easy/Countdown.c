#include <stdio.h>

int main(){

    int num =0, temp=0, i=1;
    scanf("%d",&num);
    temp = num;
    printf("\n");

    while(temp!=0){
        printf("%d\n",temp);
        temp = num -i;
        i++;
    }
    if(temp == 0){
        printf("Go!");
    }
}