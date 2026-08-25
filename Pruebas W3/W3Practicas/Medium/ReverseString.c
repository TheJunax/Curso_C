#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000], tempSentence[1000];
    int i=0, finalPos=0;
    int finPalabra = finalPos; 
    int idx = 0;

    fgets(sentence, 1000, stdin);
    sentence[strcspn(sentence, "\n")] = 0;

    while(sentence[i] != 0){
        i++;
        finalPos = i;
        finPalabra = finalPos;
    }
    for(int j=finalPos; j>0; j--){
        if(sentence[j] == ' '){
            for(int k = j + 1; k < finPalabra; k++){
                tempSentence[idx] = sentence[k];
                idx++;
            }
            tempSentence[idx] = ' ';
            idx++;

            finPalabra = j;
        }    
    }
    for(int h=0; h<finPalabra; h++){
            tempSentence[idx] = sentence[h];
            idx++;
        }
    tempSentence[idx] = '\0';

    printf("%s\n", tempSentence);
    return 0;
}
