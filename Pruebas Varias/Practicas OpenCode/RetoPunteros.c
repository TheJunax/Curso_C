#include <stdio.h>

int main(){
    char palabra[500];
    int len =0;
    fgets(palabra, 500, stdin);
    for (int i = 0; *(palabra+i); i++) { 
        if (*(palabra+i) == '\n') { 
            *(palabra+i) = 0;
            len = i; 
            break; 
        } 
    }
    
    for(int i=len-1;i>=0; i--){ 
        printf("%c", *(palabra+i));
    }
    printf("\n");

    return 0;
}