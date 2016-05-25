#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

	char score = 'C';
	switch (score) {
	case 'F' : printf("Fail\n");
		break;
	case 'C' : printf("C level\n");
		break;
	case 'B' : printf("B level\n");
		break;
	case 'A' : printf("A level\n");
		break;
	default: printf("what are you talking about""\n" );
	}

	return 0;
}