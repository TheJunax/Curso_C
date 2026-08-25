#include <stdio.h>

int main() {
    int n,tempN=0, rev = 0;
    scanf("%d", &n);
    tempN = n;
    
    while(tempN != 0){
        rev = (rev *10) + (tempN%10);
        tempN /= 10;
    }
    printf("%d", rev);    
    return 0;

}
