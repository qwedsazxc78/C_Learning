#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{


	int tuna = 'A';
	// int tuna = 'b';
	// int tuna = '1';
	// int tuna = '!';

	if (isalpha(tuna)){
		if (isupper(tuna)){
			printf("%c is an upper case letter\n", tuna);
		}else{
			printf("%c is an lower case letter\n", tuna);
		}

		
	}else{
		if (isdigit(tuna)){
			printf("%c is a number\n", tuna);
		}else{
			printf("%c is a WTF\n", tuna);
		}
	}

	return 0;
}