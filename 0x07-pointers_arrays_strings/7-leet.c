#include "main.h"
/**
 * leet - funtion that encodes a string into 1337
 * Return: string encode
 * @str: string to encode
 */

char *leet(char *str)
{
	int i,  m;
	char let[] = {97, 101, 111, 116, 108};
	char enc[] = {52, 51, 48, 55, 49};

	i = 0;
	while (*(str + i) != '\0')
	{
		for (m = 0; m < 5; m++)
		{
			if (*(str + i) == let[m] || *(str + i) == let[m] - 32)
			{
				*(str + i) = enc[m];
				break;
			}
		}
		i++;
	}
	return (str);
}

