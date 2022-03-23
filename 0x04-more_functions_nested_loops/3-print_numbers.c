#include"main.h"

/**
 * print_numbers - print 0 - 9 only using _putchar twice
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int xn;

	for (xn = '0'; xn <= '9'; xn++)
	{
		_putchar(xn);
	}
	_putchar('\n');
}
