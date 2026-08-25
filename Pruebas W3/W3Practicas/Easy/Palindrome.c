#include <stdio.h>

int main() {
    int n;
    int palim;
    int ult;
    int ntemp;
    scanf("%d", &n);
    palim = 0;
    ntemp = n;

    while (ntemp !=0) {
        ult = ntemp % 10;
        palim = (palim*10) +ult;
        ntemp = ntemp/10;
    }
    if (n == palim){
        printf("Yes");
    }else{
        printf("No");
    }



    return 0;
}