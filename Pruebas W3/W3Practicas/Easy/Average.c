#include <stdio.h>

int main() {
    int n, i=0,nums,sumNum=0;
    float prom =0;
    scanf("%d", &n);

    while(i<n){
        printf("Write the %i score: ", i+1);
        scanf("%i",&nums);
        sumNum += nums;
        i++;
    }
    prom = (float)sumNum / n;

    printf("Average: %2.1f\n", prom);
    return 0;
}
