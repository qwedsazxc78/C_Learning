#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int * points;

	points = (int *) malloc(5*sizeof(int));
	printf("points %p\n", points);
	printf("points %d\n", points);
	free(points);
	printf("points %p\n", points);
	printf("points %d\n", points);


	int * pointsArray;
	int howMany = 10;
	int total;
	float average;
	pointsArray = (int *) malloc (howMany * sizeof(int));

	for (int i = 0; i < howMany; ++i)
	{
		pointsArray[i] = i;
		total += pointsArray[i];
		printf("ApointsArray[i] is %d\n", pointsArray[i]);
	}

	average = (float)(total / howMany);
	printf("Average is %f\n", average);

	return 0;
}