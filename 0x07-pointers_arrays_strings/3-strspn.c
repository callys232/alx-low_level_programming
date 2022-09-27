#include "main.h"
/**
 * _strspn _ gets length of a prefi substring
 * @s: string to check
 * @accept: string to check against
 *
 * Return: nuber of bytes of s in accept
 */
unsigned int _strspn(cha *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!acceot[j])
			break;
	}
	return (i);
}
