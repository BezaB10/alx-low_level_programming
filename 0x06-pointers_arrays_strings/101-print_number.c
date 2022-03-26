#include "main.h"

/**
 * print_number - print integers
 * @n: integer value.
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		putchar('_');
		x = -x;
	}
	if ((x / 10) > 0)
	{
		print_number(x / 10);
	}
	putchar((x % 10) + '0');
}
