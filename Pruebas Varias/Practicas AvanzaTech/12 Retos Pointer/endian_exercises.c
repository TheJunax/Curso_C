#include <stdio.h>

int main() {
    // Ejercicio 1 — Little Endian
    int num1 = 0x41424344; // ASCII for 'ABCD'
    unsigned char *p1 = (unsigned char *)&num1;
    printf("Ejercicio 1: %c\n", *p1);

    // Ejercicio 2 — Big Endian (mismo código)
    int num2 = 0x41424344; // ASCII for 'ABCD'
    unsigned char *p2 = (unsigned char *)&num2;
    printf("Ejercicio 2: %c\n", *p2);

    // Ejercicio 3 — Little Endian
    int num3 = 0x45464748; // ASCII for 'EFGH'
    unsigned char *p3 = (unsigned char *)&num3 + 2;
    printf("Ejercicio 3: %c\n", *p3);

    // Ejercicio 4 — Big Endian
    int num4 = 0x45464748; // ASCII for 'EFGH'
    unsigned char *p4 = (unsigned char *)&num4 + 1;
    printf("Ejercicio 4: %c\n", *p4);

    // Ejercicio 5 — Little Endian
    int num5 = 0x494A4B4C; // ASCII for 'IJKL'
    unsigned char *p5 = (unsigned char *)&num5 + 3;
    printf("Ejercicio 5: %c\n", *p5);

    // Ejercicio 6 — Big Endian
    int num6 = 0x494A4B4C; // ASCII for 'IJKL'
    unsigned char *p6 = (unsigned char *)&num6 + 2;
    printf("Ejercicio 6: %c\n", *p6);

    // Ejercicio 7 — Big Endian
    int num7 = 0x12345678;
    unsigned char *p7 = (unsigned char *)&num7;
    printf("Ejercicio 7: %x\n", *p7);

    // Ejercicio 8
    int arr[5] = {10, 20, 30, 40, 50};
    int *p8 = arr;
    printf("Ejercicio 8: %d\n", *(p8 + 4 - 2));

    // Ejercicio 9 — Little Endian
    typedef struct {
        int first_number;
        int second_number;
    } MyStruct;

    MyStruct my_struct;
    unsigned char *ptr = (unsigned char*) &my_struct;
    my_struct.first_number = 0x11223344;
    my_struct.second_number = 0xAABBCCDD;
    printf("Ejercicio 9: %02X\n", *(ptr + 7));

    // Ejercicio 10 — Little Endian
    typedef struct {
        char a;
        int b;
        short c;
    } MyNewStruct;

    MyNewStruct s;
    unsigned char *ptr10 = (unsigned char*) &s;
    s.a = 0x7F;
    s.b = 0x11223344;
    s.c = 0x8001;

    // Dump de la struct para ver padding
    printf("\nDump de la struct (con padding):\n");
    for (int i = 0; i < 12; i++) {
        printf("  Byte %d: 0x%02X\n", i, *(ptr10 + i));
    }
    printf("  sizeof(MyNewStruct): %zu\n", sizeof(MyNewStruct));

    printf("Ejercicio 10: %02X\n", (int)*(short*)(ptr10 + 5));

    printf("\nDump de bytes de num (0x41424344):\n");
    unsigned char *p = (unsigned char *)&num1;
    for (int i = 0; i < 4; i++) {
        printf("  Byte %d (direccion %p): 0x%02X\n", i, (void*)(p + i), *(p + i));
    }

    return 0;
}
