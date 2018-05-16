#include <stdio.h>
#include <stdlib.h>

struct size_struct
{
    int a;
    char b;
};


int main(int argc, char const *argv[])
{
    struct size_struct test;

    printf("The size : %d\r\n", sizeof(test));


    return 0;
}
