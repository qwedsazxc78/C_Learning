#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int i = 0;
	printf("-- 1. show type by array --" );
	for ( i = 0; i < argc; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i] );
	}

	printf("-- 2. show type by point --" );
	i = 0;
	while (argv[i] != NULL)
	{
		printf("argv: %s\n", argv[i]);
		i++;
	}

	return 0;
}