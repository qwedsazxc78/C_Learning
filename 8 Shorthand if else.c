#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

	int age = 20 , people = 5 , total = 0;
	printf("age : %d\n", age );
	age++;
	printf("age++ : %d\n", age );
	++age;
	printf("++age : %d\n", age );
	age--;
	printf("age-- : %d\n", age );
	--age;
	printf("--age : %d\n", age );

	total = age++ * people;
	printf("total = age++ * people : %d\n", total );
	total = age++ * people;
	printf("total = age++ * people again: %d\n", total );

	return 0;
}