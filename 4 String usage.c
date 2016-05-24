#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	
	// the char array need to add /r/n, so the total length of char array is 8+2
	char name1[10] = "Minghung";
	char name2[] = "Hsieh";
	printf("My last name is %s and my first name is %s\n", name2, name1);


	char food[] = "tuna";
	printf("My favoriate food is %s\n", food);
	// need include string.h
	strcpy(food, "bacon");
	printf("My favoriate food is %s\n", food);
	return 0;
}