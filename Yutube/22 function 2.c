#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int calculateBonus(int yearsWorked);

int main(int argc, char const *argv[])
{
	int getBonus = calculateBonus(20);
	printf("Bonus : %d\n", getBonus );
	return 0;
}

int calculateBonus(int yearsWorked) {
	int bonus = yearsWorked * 250;
	if (yearsWorked > 10) {
		bonus += 1000;
	}

	return bonus;
}