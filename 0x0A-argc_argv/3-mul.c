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
	if (argc < 3)
	{
		puts("Error\n");
		return (1);
	}
	else
	{
		int x, y;

		x = atoi(*(argv + 1));
		y = atoi(*(argv + 2));
		printf("%d\n", x * y);
	}
	return (0);
}
