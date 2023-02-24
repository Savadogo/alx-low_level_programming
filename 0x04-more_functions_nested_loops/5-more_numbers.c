#include "main.h"
/**
 * more_numbers - Print numbers from 0 to 14
 */

void more_numbers(void)
{
	int i, j, m;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			m = i;
			if (i > 9)
			{
				_putchar('1');
				m -= 10;
			}
			_putchar(m + 48);
		}
		_putchar('\n');
	}
}

