#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{

	char combine[100] = "Yo! ";

	strcat(combine, "haha");
	printf("The strcat result : %s \n", combine);

	strcpy(combine, "test strcpy");
	printf("The strcpy result : %s \n", combine);

	return 0;
}