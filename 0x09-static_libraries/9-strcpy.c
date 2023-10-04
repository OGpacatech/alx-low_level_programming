#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination buffer
 * @src: source string
 *
 * Return: Pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}

	for (; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';

	return (dest);
}
