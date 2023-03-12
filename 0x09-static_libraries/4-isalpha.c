#include "main.h"
/**
 * _isalpha - Returns 1 if c is letter, lowercase or uppercase and 0 otherwise
 * Return: boolean determining if character lowercase
 * @c: character to test
 */

int _isalpha(int c)
{
	int r = 0;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		r = 1;
	}
	return (r);
}

