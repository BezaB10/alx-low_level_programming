#include <stdio.h>

/**
 * main - prints name of program
 * @argc: number of components in argv array
 * @argv:  array of compoments from command line
 * Return: Always (0) success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
