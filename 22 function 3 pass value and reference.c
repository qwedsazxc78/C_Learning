#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

void passByValue(int i) ;
void passByAddress(int *i);

int main(int argc, char const *argv[])
{
	int tuna = 20;

	passByValue(tuna);
	printf("passByValue : %d\n", tuna );

	passByAddress(&tuna);
	printf("passByAddress : %d\n", tuna );
	return 0;
}

void passByValue(int i) {
	i = 99;
	return ;
}

void passByAddress(int *i) {
	*i = 64;
	return ;
}