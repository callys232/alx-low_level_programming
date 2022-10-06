#include "main.h">
#include <stdlib.h>
/**
 * arry_range - creates an array of integers ordered from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array
 *
 * Return: if min > max or the function fails - NULL
 * otherwise - a pointer to the newly created aray
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL);
		return (NULL);

		for (index = 0; index < size; index++)
			array[index] = min++;

		return (array);
}
