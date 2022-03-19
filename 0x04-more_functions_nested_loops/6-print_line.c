#include "main.h"

/**
 * print_line - prints straight line n times
 * @n: times straight line is printed
 * Return: void
 */

void print_line(int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
