#include "main.h"

/**
 * rev_string - prints a string in normally and in reverse
 * @s: pointer to the string to print
 */

void rev_string(char *s)
{
	int x, y, z;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	for (y = x - 1; y >= x / 2; y--)
	{
		z = s[y];
		s[y] = s[x - y - 1];
		s[x - y - 1] = z;
	}
}
