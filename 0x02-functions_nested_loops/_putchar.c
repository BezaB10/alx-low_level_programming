#include <unistd.h>

/**
 * _putchar
 *
 * return: 1(success) and -1 if not
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
