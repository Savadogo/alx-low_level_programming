#include "main.h"
/**
 * times_table - printing each minutes of the day
 * @n: size of the table
 */

void print_times_table(int n)
{
	int i, j, m;

	if (n < 0 || n > 15)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				m = i * j;
				if (m >= 10)
				{
					_putchar((m / 10) + '0');
				}
				_putchar((m % 10) + '0');
				if (j < 9)
				{
					if (i * (j + 1) >= 10)
					{
						_putchar(',');
						_putchar(' ');
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}

