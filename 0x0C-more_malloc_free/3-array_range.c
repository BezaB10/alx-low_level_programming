#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: range minimum.
 * @max: range maximum.
 * Return: If min > max or the function fails - NULL.
 * Otherwise - a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i, *array;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
