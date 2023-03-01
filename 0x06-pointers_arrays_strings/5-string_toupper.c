#include "main.h"
/**
 * string_toupper - This function changes all lowercase letters of a string to uppercase
 * Return: string all in upper case
 * @str: string to put in upper case
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
		{
			*(str + i) = *(str + i) - 32;
		}
	}
}

