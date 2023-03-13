#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: 0
 * @argc: number of arguments
 * @argv: list of arguments
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		puts("0");
		return (0);
	}
	else
	{
		int i, agg;

		agg = 0;
		for (i = 1; i < argc; i++)
		{
			if (atoi(*(argv + i)) != 0)
			{
				agg += atoi(*(argv + i));
			}
			else
			{
				puts("Error");
				return (1);
			}
		}
		printf("%d\n", agg);
	}
	return (0);
}
