#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first var
 * @b: pointer to the second var
 */

void swap_int(int *a, int *b)
{
	int Q;

	Q = *a;
	*a = *b;
	*b = Q;
}
