#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value (inclusive)
 * @max: maximum value (inclusive)
 *
 * Return: pointer to the newly created array
 *         or NULL if min is greater than max or if malloc fails
 */
int *array_range(int min, int max)
{
	int *new_array;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	new_array = malloc(sizeof(int) * size);

	if (new_array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		new_array[i] = min++;

	return (new_array);
}
