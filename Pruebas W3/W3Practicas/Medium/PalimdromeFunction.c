#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *word) {
    int len = strlen(word),  j=0;
    char tempWord[200]="hola";
    

    for(int i =len-1; i>=0; i--){
        tempWord[j] = word[i];
        j++;
    }
    tempWord[len] = '\0';
    //printf("%s\n", tempWord);

    if(strcmp(tempWord,word) == 0){
        return 1;
    }else{
        return 0;
    }
    
}

int main() {
    char word[200];
    scanf("%s", word);
    int len = strlen(word), value=0;
    for (int i = 0; i < len; i++) word[i] = tolower(word[i]);

    value =isPalindrome(word);
    if(value==1){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}
