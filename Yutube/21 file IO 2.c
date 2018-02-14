#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main(int argc, char const *argv[])
{
	FILE *fPointer;
	char singleLine[150];

	fPointer = fopen("bacon.txt", "a"); 
	if (fPointer)
	{
		fprintf(fPointer, "add something\n" );
		fclose(fPointer);
		printf("Open this file \n");
	}
	else {
		printf("Fail to open this file \n");

	}

	

	return 0;
}