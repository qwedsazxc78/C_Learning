#include <stdio.h>
#include <stdlib.h>

int global;

int main(int argc, char const *argv[])
{
    int local;

    global = 0x10;
    local = 0x10;

    printf("The global location is : %p\r\n", &global);
    printf("The local location is : %p\r\n", &local);
    printf("The main fucntion is : %p\r\n", main);

    return 0;
}
