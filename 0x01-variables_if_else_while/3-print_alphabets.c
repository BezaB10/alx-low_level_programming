#include<stdio.h>

/**
 * main - Entry point
 *
 * Description
 *
 * Return Always 0 (Success)
 */

int main(void)
{
	char l = 'a';
	char U = 'A';

	while (l <= 'z')
	{
		putchar(l);
		++l;
	}
	while (U <= 'Z')
	{
		putchar(U);
		++U;
	}
	putchar('\n');
	return (0);
}
