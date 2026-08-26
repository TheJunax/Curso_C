#include <stdio.h>

    int main() {
        int num = 0x494A4B4C;  // ASCII for 'IJKL'
        unsigned char *p = (unsigned char *)&num + 3; //K num+2 Big endian
        printf("%c\n", *p);
        return 0;
    }
