#include"main.h"
#include <stdio.h>

/**
 * num_length - returns the length of string..and please betty wtf!
 *
 * @n: operand number
 *
 * Return: Always 0 (Success)
 */

int num_length(int n)
{
	int l = 0;

	if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		l += 1;
	}
	return (l);
}

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 * starting with 1 and 2 followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c, initials;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (c = 1; c <= 98; ++c)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initials = num_length(mx) - 1 - num_length(f1);

		while (f1o > 0 && initials > 0)
		{
			printf("%d", 0);
			--initials;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (c != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
