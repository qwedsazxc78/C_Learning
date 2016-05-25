#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int startOfNumber = 10;
	char stars[startOfNumber];

	while (startOfNumber != 0) {
		if (startOfNumber <= 10) {
			stars[10 - startOfNumber] = "s";
			printf("%s\n", stars);
			startOfNumber--;
		}
	}

	return 0;
}