#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{

	float bacon1 = 9.12345;
	float bacon2 = 3.3;

	printf("bacon1 is : %.2f\n", floor(bacon1));
	printf("bacon2 is : %.2f\n", floor(bacon2));

	printf("bacon1 is : %.2f\n", ceil(bacon1));
	printf("bacon2 is : %.2f\n", ceil(bacon2));


	return 0;
}