#include "main.h"
/**
 * _islower - Returns 1 if c is lowercase and 0 otherwise
 * Return - int
 */

int _islower (int c)
{
	int r = 0;

	if(c >= 97 && c <= 122)
	{
		r = 1;
	}
	return (r);
}

