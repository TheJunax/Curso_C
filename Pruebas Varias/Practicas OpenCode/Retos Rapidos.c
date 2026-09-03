#include <stdio.h>
#include <string.h>

int palindromo(char string[], int n){
    char palim[n]; 
    int j=n;
    for(int i=0; i<=n; i++){
        palim[i] = string[j]; 
        j--;
    }
    printf("%s\n", palim);
    if(strcmp(string, palim) == 0){
        return 1;
    }
    return 0;
}

int main(){
    int ind=0;
    char string[50];
    scanf("%s", string);
    while(string[ind] != '\0') ind++;
    int n=ind-1;
    int ispalim = palindromo(string, n);
    printf("palim: %d\n", ispalim);
    return 0;
}