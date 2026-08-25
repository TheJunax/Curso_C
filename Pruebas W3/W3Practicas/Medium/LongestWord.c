#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sen[1000];
    int count=0,i=0,longestInt=0, ind=0;
    fgets(sen, 1000, stdin);
    for (int i = 0; sen[i]; i++) { 
        if (sen[i] == '\n') { 
            sen[i] = 0; 
            break; 
        } 
    }
    //char longest[200] = "";

    while(sen[i] !=0){
        if(!isalpha(sen[i])){
            if(longestInt < count){
                longestInt = count;
                ind = i-longestInt;
            }
            count =0;
        }else{
            count++;
        }
        i++;
    }
    if(sen[i] == 0){

        if(longestInt < count){
            longestInt = count;
            ind = i- longestInt;
            
        }
    }

    for(int j=ind; j<longestInt+ind;j++){
        printf("%c", sen[j]);
    }
    printf("\n");
    return 0;
}
