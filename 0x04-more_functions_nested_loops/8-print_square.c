#include "main.h"

/**
 * print_square - prints square with #
 * @size: size of square in integer to be printed
 * Return: void
 */
void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar(35);
		}
		if (x != size - 1)
		{
			_putchar('\n');
		}
	}
	putchar('\n');
}
