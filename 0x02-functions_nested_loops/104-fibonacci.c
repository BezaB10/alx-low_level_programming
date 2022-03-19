#include"main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers.
 *
 * NL: returns the length of string
 *
 * @num: operand number
 *
 * Return: Always 0 (Success)
 */
int NL(int N)
{
	int L = 0;

	if (!L)
		return (1);
	while (N)
	{
		N = N / 10;
		L += 1;
	}
	return (L);
}

int main(void)
{
	int c, initials;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (c = 1; c <= 98; ++c)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initials = NL(mx) - 1 - NL(f1);

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
