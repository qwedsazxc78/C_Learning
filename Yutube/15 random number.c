#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{

	int i, diceRoll, tmp;
	for (int i = 0; i < 5; ++i)
	{
		tmp = rand();
		diceRoll = rand()%6 +1;
		printf("Random number is : %d\n", tmp );
		printf("diceRoll is : %d\n", diceRoll );
		
	}


	return 0;
}