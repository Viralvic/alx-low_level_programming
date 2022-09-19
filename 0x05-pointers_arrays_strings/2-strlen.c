#include "main.h"

/**
 * _strlen - Functions that return lenght of a string
 * @s: String to get it's lenght on
 *
 * Return: The lenght of @str
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
