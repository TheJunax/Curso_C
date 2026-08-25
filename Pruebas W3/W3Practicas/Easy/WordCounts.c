#include <stdio.h>
#include <string.h>

int main() {
    char sentence[500];
    int i =0, count=1;
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0;

    while(sentence[i] != 0){
        if(sentence[i] == ' '){
            count ++;
            
        }
        i++;
    }
    printf("%d Words \n", count);
    return 0;
}
