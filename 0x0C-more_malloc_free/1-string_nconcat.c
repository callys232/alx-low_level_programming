#include "main.h"
#include <stdlib.h>
/**
 * string_nooncat - Concatenates two string using at
 * most an inputted number of bytes
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of byte of s2 to concatenate to s1
 *
 * Return: if the function fails - NULL
 * otherwise - a pointer to the concatenated space in memory
 */
char *string_nconcat(char *s1, char s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		cincat[len++] = s1[index];

	concat[len] = '\0';

	return (concat);
}
