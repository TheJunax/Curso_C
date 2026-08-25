#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[200], tempWord[200]="hola";
    scanf("%s", word);
    int len = strlen(word), j=0;
    for (int i = 0; i < len; i++) word[i] = tolower(word[i]);

    for(int i =len-1; i>=0; i--){
        tempWord[j] = word[i];
        j++;
    }
    tempWord[len] = '\0';
    //printf("%s\n", tempWord);

    if(strcmp(tempWord,word) == 0){
        printf("Yes");
    }else{
        printf("NO");
    }

    return 0;
}
