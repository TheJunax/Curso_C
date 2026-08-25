#include <stdio.h>
#include <string.h>

int main() {
    char word[200];
    scanf("%s", word);
    int len = strlen(word);

    //printf("%d", len);
    printf("First: %c\n", word[0]);
    printf("Last: %c\n", word[len-1]);
    
    return 0;
}
