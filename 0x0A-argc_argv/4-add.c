#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
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
			long unsigned int j;

			for (j = 0; j < strlen(*(argv + i)); j++)
			{
				if (*(argv + i)[j] < '0' || *(argv + i)[j] > '9')
				{
					puts("Error");
					return (1);
				}
			}
			agg += atoi(*(argv + i));
		}
		printf("%d\n", agg);
	}
	return (0);
}
