#include"main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * numLength - returns the length of string
 *
 * @num: operand number
 *
 * Return: Always 0 (Success)
 */
int numLength(int num)
{
	int length = 0;
	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

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
