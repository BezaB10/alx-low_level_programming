#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: pointer to the first occurence of the character
 * Return: the pointer to c if found, NULL if not found
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return ('\0');
}
