#include "main.h"
/**
 * _isupper - Returns 1 if c is lowercase and 0 otherwise
 * Return: boolean determining if character lowercase
 * @c: character to test
 */

int _isupper(int c)
{
	int r = 0;

	if (c >= 65 && c <= 90)
	{
		r = 1;
	}
	return (r);
}

