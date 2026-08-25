#include <stdio.h>

int recursiveSum(int n) {
    if(n>0){
        return (n + recursiveSum(n-1));
    }else{
        return 0;
    }    
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Sum: %d\n", recursiveSum(n));
    return 0;
}
