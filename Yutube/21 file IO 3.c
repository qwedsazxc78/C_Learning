#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main(int argc, char const *argv[])
{
	FILE *fPointer;
	char singleLine[150];

	fPointer = fopen("bacon.txt", "w+");
	if (fPointer)
	{
		fprintf(fPointer, "add something\n" );
		fputs("Hate you!!!", fPointer);

		fseek(fPointer, 7, SEEK_SET);
		fputs("Point1", fPointer);

		fseek(fPointer, -6, SEEK_SET);
		fputs("Point2", fPointer);

		fclose(fPointer);
		printf("Open this file \n");
	}
	else {
		printf("Fail to open this file \n");

	}

	return 0;
}