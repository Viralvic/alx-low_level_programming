#include "main.h"

/**
 * _strcpy - copies a string pointed to by @src, including the
 *		terminationg null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to
 * @src: The source string to copy.
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;

	}

	return (dest);
}
