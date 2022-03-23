#include"main.h"

/**
 * main - entry point
 * @void: no argument
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 1; x < 100; x++)
	{
		if (x % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
