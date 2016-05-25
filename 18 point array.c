#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int i;
	int meatBalls[5] = {7,9,12,22,19};
	int count = 5;
	printf("Element \t Address \t Value \n");

	for (int i = 0; i < count; ++i)
	{
		printf("meatBalls[%d] \t %p \t %d \n", i , &meatBalls[i] ,  meatBalls[i]);
	}

   printf("*meatBalls \t %p \n", meatBalls);
   printf("meatBalls \t %d \n", *meatBalls);
   printf("meatBalls+2 \t %d \n", *(meatBalls+2));
	return 0;
}