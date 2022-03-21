#include"main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to print
 */

void print_rev(char *s)
{
	int x, y;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	y = x;
	for (y = x - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
