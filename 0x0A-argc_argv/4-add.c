#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the addition of the number as arguments
 * @argc: number of components in argv array
 * @argv:  array of compoments from command line
 * Return: 1 if error, 0 if success
 */

int main(int argc, char *argv[])
{
	int x, y, z, num;
	int sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != 0; y++)
		{
			if (argv[x][y] < 48 || argv[x][y] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (z = 1; z < argc; z++)
	{
		num = atoi(argv[z]);

		if (num >= 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
