#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a[10];
    int b[5][6];

    int *p1 = a;
    int (*p2)[6] = b;  // = int [6](*p2)

    printf("hello world!\r\n");


    return 0;
}

/*
The difference of point array
int *p[5];   -> a int array with 5 element space, and each element cantain one point address
int (*p)[5]; -> a point address to a int array that contain 5 element

*p[5] ===

[
int* ,
int* ,
int* ,
int* ,
int* ,
]

(*p)[5] ===

*p ->
[
int ,
int ,
int ,
int ,
int ,
]


point on 2D array
int b[2][3];
int (*p)[3];

point on 3D array
int c[2][3][4];
int (*p)[3][4];
 */