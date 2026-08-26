#include <stdio.h>
int main(){
    int val = 25;
    int *ptr1 = &val;
    int *ptr2 = &val;
    int *ptr3 = ptr1;
    *ptr3 = 30;
    *ptr2 = 40;
    printf("%d\n", val);
    return 0;
}