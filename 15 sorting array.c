#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{

	int i, swap;
	int RandomArray[10], SortingArray[10];
	int count =  10;

	printf("RandomArray is \n");
	for (int i = 0; i < count; ++i)
	{
		RandomArray[i] = rand() % 20 + 1;
		printf("%d, ", RandomArray[i]);
	}


	for (int i = 0; i < count ; ++i)
	{
		for (int j = 0; j < count; ++i)
		{
			if (RandomArray[i + 1] > RandomArray[i]) {
				swap = RandomArray[i];
				RandomArray[i] = RandomArray[i + 1];
				RandomArray[i + 1] = swap;
			}
		}
	}

	for (int i = 0; i < count; ++i)
	{

		printf("%d, ", RandomArray[i]);
	}



	return 0;
}