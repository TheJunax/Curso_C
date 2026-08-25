#include <stdio.h>

int main() {
    int n,tempN=0,digit=0, total = 0;
    scanf("%d", &n);
    tempN = n;
    while(tempN != 0){
        digit = tempN%10;
        total += digit;
        tempN /= 10;
    }

    printf("Digit Sum: %i", total);

    return 0;
}
