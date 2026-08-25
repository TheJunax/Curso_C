#include <stdio.h>

long long power(int base, int exp) {
    long long result = 1;
    for(int i=0;i<exp;i++){
        result *= base;
    }
    return result;
}

int main() {
    int base, exp;
    scanf("%d", &base);
    scanf("%d", &exp);
    printf("Result: %lld\n", power(base, exp));
    return 0;
}
