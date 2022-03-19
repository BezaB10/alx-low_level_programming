#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int xn;

	for (xn = 48; xn <= 57; xn++)
	{
		if ((xn != 50) && (xn != 52))
		{
			_putchar(xn);
		}
	}
	_putchar('\n');
}
