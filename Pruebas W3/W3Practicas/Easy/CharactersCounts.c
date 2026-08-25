#include <stdio.h>
#include <string.h>

int main() {
    char sentence[500];
    int i = 0, count = 0;
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0;

    while(sentence[i] != 0){
        count +=1;
        i ++;
    }
    printf("The word contains %d characters ", count);
    return 0;
}
