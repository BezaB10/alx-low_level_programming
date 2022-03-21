#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: string input pointer
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, c = 0, m;

	while (c >= 0)
	{
		if (str[c] == '\0')
			break;
		c++;
	}
	if (c % 2 == 0)
	{
		m = c / 2;
		for (i = m; i < c; i++)
			putchar(str[i]);
	}
	else
	{
		m = (c - 1) / 2;
		for (i = m + 1; i < c; i++)
			putchar(str[i]);
	}
	putchar('\n');
}
