#include "main.h"

/**
  * swap_int - Function that swap the values of two int
  * @a: int to swap
  * @b: int to swap
  */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
