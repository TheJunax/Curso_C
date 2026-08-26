#include <stdio.h>

    int main() {
        int num = 0x45464748;  // ASCII for 'EFGH'
        unsigned char *p = (unsigned char *)&num + 2; //&NUM +1 Big Endian
        printf("%c\n", *p);
        return 0;
    }
