#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "_putchar\n";

	while (*str != '\0')
		_putchar(*str++);

	return (0);
}
