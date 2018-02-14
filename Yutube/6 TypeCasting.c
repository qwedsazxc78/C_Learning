#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	float avgProfit;
	int priceOfPumplin = 10;
	int slaes = 59;
	int daysWorked = 7;

	avgProfit = (priceOfPumplin * slaes) / daysWorked;
	printf("Average daily profit : %.2f\n", avgProfit);
	avgProfit = (float)(priceOfPumplin * slaes) / daysWorked;
	printf("Average daily profit : %.2f\n", avgProfit);

	return 0;
}