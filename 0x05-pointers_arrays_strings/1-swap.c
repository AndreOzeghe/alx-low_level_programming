#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *x, int *y)
{
	int swap;

	swap = *x;
	*x = *y;
	*y = swap;
}

