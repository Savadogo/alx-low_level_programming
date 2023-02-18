#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Print sign of number
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit=n%10
	if (last_digit > 5)
	{
		printf("last digit of %i is %i and is greater than 5\n", n, last_digit);
	}
	else
	{
		if (last_digit==0)
		{
			printf("last digit of %i is %i\n", n, last_digit);
		}
		else
		{
			printf("last digit of %i is %i and is less than 6 and not 0\n", n, last_digit);
		}
	}
	return (0);
}
