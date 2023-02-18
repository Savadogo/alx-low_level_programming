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
	if (n > 0)
	{
		printf("%l is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%l is negative\n", n);
	}
	else
	{
		printf("%l is zero\n", n);
	}
	return (0);
}
