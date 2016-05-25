#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{

	int i, j;
	int RandomArray[10], SortingArray[10];
	int count =  10;

	printf("RandomArray is :");
	for (int i = 0; i < count; ++i)
	{
		RandomArray[i] = rand() % 20 + 1;
		printf("%d, ", RandomArray[i]);
	}
	printf("\n");

	for ( i = 0; i < count ; ++i)
	{
		int min = RandomArray[i];
		for ( j = 0; j < count; ++j)
		{
			if (min < RandomArray[j]) {
				min = RandomArray[j];
				RandomArray[j] = RandomArray[i];
				RandomArray[i] = min;
			}
		}
	}

	printf("SortingArray is : ");
	for ( i = 0; i < count; ++i)
	{
		printf("%d, ", RandomArray[i]);
	}
	printf("\n");


	return 0;
}