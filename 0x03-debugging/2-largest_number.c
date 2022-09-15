#include "main.h"

/**
 * largest_number - returns the larget of 3 numbers
 * @a: first int
 * @b: second int
 * @c: thrid int
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = b;

	if (a > b)
	{
		largest = a;
	}
	else if (c > b)
	{
		largest = c;
	}
	return (largest);
}
