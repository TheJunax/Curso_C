#include <stdio.h>
#include <limits.h>

int main() {
    int n, largest=0;
    scanf("%d", &n);
    int numbers[n];
    for(int i=0; i<n; i++){
        scanf("%d", &numbers[i]);
    }
    for(int j=0; j<n; j++){
        for(int k=0; k<n; k++){
            if(numbers[j] < numbers[k]){
                largest = numbers[k];
            }
        }
    }

    printf("Largest: %d\n", largest);

    return 0;
}
