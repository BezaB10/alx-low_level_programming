#include "main.h"

/**
 * main entry point
 *
 * return:always 0()success
 */

int main(void)
{
	char *str = "_putchar\n";
	while (*str != '\0')
		_putchar(*str++);
	return (0);
}
