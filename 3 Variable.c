#include <stdio.h>
#include <stdlib.h>

int main() {
	
	long timestamp = 1422748800000;
	long timeHR = 3600000;
	int counter = 30;
	for (int i = 0; i < counter; ++i)
	{
		timestamp = timestamp + timeHR;
		printf("%ld\n", timestamp);
	}

	return 0;
};