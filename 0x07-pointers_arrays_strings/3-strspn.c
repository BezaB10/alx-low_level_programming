#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string
 * @accept: pointer to the number of bytes of substring
 * Return: the number of bytes of the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y = 0;
	int length = 0;

	for (x = 0; s[x] != '\0' && s[x] != 32; x++)
	{
		if (accept[y] != s[x])
		{
			for (; accept[y] != '\0'; y++)
			{
				length++;
			}
			if (accept[y]  == '\0')
			{
				break;
			}
		}
	}
	return (length);
}
