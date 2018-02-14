#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

void printSomething(int Age);


int globalAge = 23;

int main(int argc, char const *argv[])
{
	int localAge = 20;
	printSomething(localAge);
	return 0;
}

void printSomething(int Age) {
	printf("globalAge : %d\n", globalAge);
	printf("localAge : %d\n", Age);
	return;
}