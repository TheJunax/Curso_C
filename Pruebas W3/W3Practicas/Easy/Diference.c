#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, dif=0;
    scanf("%d", &a);
    scanf("%d", &b);

    if(a>b){
        dif = a-b;
    }else{
        dif= b-a;
    }

    printf("Difference: %i\n", dif);
    return 0;
}
