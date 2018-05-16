#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int (*myfunction)(const char *, ...);
    int (*myshow)(const char *, ...);

    printf("Hello world!\r\n");
    printf("printf addr %p !\r\n", printf);
    myfunction = printf;
    myshow = 0x00401BD8;

    myfunction("myfunction show QQ\r\n");



    return 0;
}
