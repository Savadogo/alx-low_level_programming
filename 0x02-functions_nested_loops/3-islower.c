#include "main.h"
/**
 * _islower - Returns 1 if c is lowercase and 0 otherwise
 * Return: boolean determining if character lowercase
 * c: character to test
 */

int _islower(int c)
{
	int r = 0;

	if (c >= 97 && c <= 122)
	{
		r = 1;
	}
	return (r);
}

