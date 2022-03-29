#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals
 * of a square matrix of integers
 * @a: pointer to the number of rows or columns
 * @size: pointer to the size of the square
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int x;
	int s1 = 0, s2 = 0;

	for (x = 0; x < size; x++)
	{
		s1 += a[(size * x) + x];
		s2 += a[(size * (x + 1)) - (x + 1)];
	}
	printf("%d, %d\n", s1, s2);
}
