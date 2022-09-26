#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: String to search
 * @c: char to find
 * Return: a ponter to the first occurence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}

	return ('\0');
}
