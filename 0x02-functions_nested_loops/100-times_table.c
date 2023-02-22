#include "main.h"
#include <stdio.h>
/**
 * print_times_table - printing each minutes of the day
 * @n: size of the table
 */

void print_times_table(int n)
{
	int i, j, m;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				m = i * j;
				if (m >= 100)
				{
					_putchar('0' + m / 100);
					_putchar('0' + m / 10 - 10);
					_putchar('0' + m % 10);
				}
				else if ((m >= 10) && (m < 100))
				{
					_putchar('0' + m / 10);
					_putchar('0' + m % 10);
				}
				_putchar('0' + m % 10);
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					if (i * (j + 1) >= 10)
					{
						_putchar(' ');
					}
				       	else if (i * (j + 1) >= 100)
					{
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}

