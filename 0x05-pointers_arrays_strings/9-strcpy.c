#include "main.h"
/**
 * _strcpy - copy string
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	do {
		*(dest + i) = *(src + i);
		i++;
	} while (*(src + i) != '\0');
	*(dest + i) = *(src + i);
	return (dest);
}

