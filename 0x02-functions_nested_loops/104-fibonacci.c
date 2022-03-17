#include"main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int n, x, y, z;
	int a;

	x = 1;
	y = 2;

	printf("%ld, ", x);
	printf("%ld, ", y);
	for (a = 0; a < 96; a++)
	{
		z = x + y;
		if (z > 0)
		{
			printf("%ld", z);
		}
		else if (z < 0)
		{
			n = z * -1;
			printf("%ld", n);
		}
		else
		{
			printf(" ");
		}
		x = y;
		y = z;

		if (a == 95)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
