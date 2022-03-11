#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	int m, o;

	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			o = 0;
			while (o <= 9)
			{
			if (n != m && n < m && m != o && m < o)
			{
				putchar(n + 48);
				putchar(m + 48);
				putchar(o + 48);
				
				if (n + m + o != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++o;
		}
		++m;
	}
	++n;
}
putchar('\n');

return (0);
}
