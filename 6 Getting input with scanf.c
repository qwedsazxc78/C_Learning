#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char Name[20];
	char Crush[20];
	int numberOfKids;

	printf("what's your name\n");
	scanf("%s", Name);

	printf("who are you going to marry? \n");
	scanf("%s", Crush);

	printf("how many kid will you have? \n");
	scanf("%d", &numberOfKids);

	return 0;
}
