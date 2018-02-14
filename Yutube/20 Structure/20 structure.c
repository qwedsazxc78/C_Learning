#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include "20_structure.h"

int main(int argc, char const *argv[])
{
	struct user bucky;
	struct user Tim;

	bucky.userID = 1;
	Tim.userID = 2;
	// bucky.firstName = "Su";
	// bucky.firstName = "Hsieh";
	printf("bucky userID is %d\n", bucky.userID);
	printf("Tim userID is %d\n", Tim.userID);
	// printf("bucky firstName is %s\n", bucky.firstName);

	return 0;
}