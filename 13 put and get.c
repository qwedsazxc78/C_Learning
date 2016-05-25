#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{

	char catName[100];
	char catFood[25];
	char sentence[75];

	puts("This is put test!");
	gets(catName);

	puts("This is put test!");
	gets(catName);

	strcat(sentence, catName);
	strcat(sentence, " loves to eat");
	strcat(sentence, catFood);
	puts(sentence);



	return 0;
}