#include"main.h"

/**
 * main -Entry point
 *
 * Discription: prints lowercase alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
	int A;
	for (A = 'a'; A <= 'z'; ++A)
		_putchar(A);
	_putchar('\n');
}
