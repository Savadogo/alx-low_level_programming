#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 * @argc: number of arguments
 * @argv: list of arguments
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	for (i = 1; i < argv; i++)
	{
		printf("%d\n", argc[i]);
	}
	return (0);
}
