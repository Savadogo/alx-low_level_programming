#include "main.h"
/**
 * _isdigit - Returns 1 if c is a digit  and 0 otherwise
 * Return: boolean determining if character is a digit
 * @c: character to test
 */

int _isupper(int c)
{
	int r = 0;

	if (c >= 48 && c <= 57)
	{
		r = 1;
	}
	return (r);
}

