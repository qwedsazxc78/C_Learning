#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{

	int tuna = 19;

	printf("tuna = %d\n", tuna);
	printf("tuna = %d\n", &tuna);

	printf("Address \t Nmae \t Value \n", tuna);
	printf("%p \t %s \t %d \n", &tuna , "tuna", tuna);

	int *pTuna = &tuna;
	printf("Address \t Nmae \t Value \n", tuna);
	printf("%p \t %s \t %d \n", pTuna , "tuna", tuna);

	printf("%p \t %s \t %p \n", &pTuna , "pTuna", pTuna);

	printf("\n*pTuna: %d \n", *pTuna);

	*pTuna = 71;
	printf("*pTuna: %d \n", *pTuna);
	printf("tuna: %d\n", tuna);
	return 0;
}