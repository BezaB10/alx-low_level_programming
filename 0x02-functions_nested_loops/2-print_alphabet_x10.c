#include "holberton.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char c;
	for (i =0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			-putchar(c);
		}
		_putchar('\n');
	}