#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which contsist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, omo;
	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		omo = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{

				f++;
				omo =1;
			}
		}
		 if (omo == 0)
		{

			return (f);
		}
	}

	return (0);
}
