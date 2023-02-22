#include "main.h"
#include <stdio.h>


int i, m;

m = 0;
for (i = 0; i < 1024;  i++)
{
	if (i % 2 == 0 || i % 3 == 0)
	{
		m += i;
	}
}
printf("%d \n", m);

