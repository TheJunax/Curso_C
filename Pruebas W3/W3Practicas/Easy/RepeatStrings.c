#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int n;
    scanf("%s", word);
    scanf("%d", &n);

    for(int i =0; i<n; i++){
        printf("%s",word);
    }
    printf("\n");
    return 0;
}
