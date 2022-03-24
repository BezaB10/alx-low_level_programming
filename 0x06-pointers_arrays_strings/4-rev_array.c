#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers
 * @a: pointer to int array
 * @n: is the number of elements to swap
 * Return: nothing
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
