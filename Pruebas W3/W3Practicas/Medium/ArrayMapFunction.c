#include <stdio.h>

void doubleAll(int *numbers, int *result, int n) {

    for(int j=0;j<n;j++){
        result[j] = numbers[j] *2;
        printf("%d ", result[j]);
    }
    
}

int main(){
    int n=0;
    scanf("%d",&n);
    int numbers[n], result[n];

    for(int i=0;i<n;i++){
        scanf("%d", &numbers[i]);    
    }

    doubleAll(numbers,result,n);

    return 0;
}