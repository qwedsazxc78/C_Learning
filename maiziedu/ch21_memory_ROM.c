#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    static int a;
    a = 0x10;

    printf("The a is : %p\r\n", &a);
    printf("The main fucntion location is : %p\r\n", main);

    /** 1. code memory location ***************************************************/
    unsigned char *p;

    p = (unsigned char *) main;
    printf("The p[0] is : %x\r\n", p[0]);

    // access error -> you can't access this memory
    // p[0] = 0x12;
    // printf("+ access + The p[0] is : %x\r\n", p[0]);


    /** 2. string memory location ***************************************************/
    char *p1 = "helao world";

    printf("The string p1 is : %s\r\n", p1);
    printf("The string 'helao world' is : %p\r\n", "helao world");

    // access error -> you can't access this memory
    // p1[3] = 'l';
    // printf("The string p1 is : %s\r\n", p1);


    return 0;
}
