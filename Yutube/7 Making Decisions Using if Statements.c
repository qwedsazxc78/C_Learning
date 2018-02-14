#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

	int age;
	char gender;
	printf("How old are you? \n");
	scanf("%d", &age);
	printf("What is your gender? (m/f)\n");
	scanf("%s", &gender);

	if (age > 18) {
		printf("You may enter this website.\n");
		if (gender == 'm')
		{
			printf("dude");
		}
		else
		{
			printf("m'lady\n");
		}
	}
	else {
		printf("Nothing to see here!\n");
	}

	return 0;
}