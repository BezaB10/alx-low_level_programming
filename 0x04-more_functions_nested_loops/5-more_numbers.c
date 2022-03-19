#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times on a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int y = 0, x = 0;

	while (x < 10)
	{
		for (; y < 15;)
		{
again:
			_putchar((y % 10) + 48);
			y++;
			if (y > 9 && y < 15)
			{
				_putchar((y / 10) + 48);
				goto again;
			}
		}
		_putchar(10);
		y = 0;
		x++;
	}
}
