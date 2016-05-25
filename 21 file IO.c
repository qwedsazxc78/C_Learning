#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main(int argc, char const *argv[])
{
	FILE *fPointerW, *fPointerR;
	char singleLine[150];

	fPointerW = fopen("bacon.txt", "w");
	fPointerR = fopen("bacon.txt", "r");
	if (fPointerW)
	{
		fprintf(fPointerW, "Yoyo ~\n" );
		fclose(fPointerW);
		printf("Open this file \n");
	}
	else {
		printf("Fail to open this file \n");

	}

	if (fPointerR)
	{
		// while (!feof(fPointerR)) {
		// 	fgets(singleLine, 150, fPointerR);
		// 	printf("fPointerR %s\n" , singleLine);
		// }
		fgets(singleLine, 150, fPointerR);
		printf("Read File Context: %s" , singleLine);
	    puts(singleLine);
		fclose(fPointerR);

	}
	else {
		printf("Fail to open this file \n");

	}

	return 0;
}