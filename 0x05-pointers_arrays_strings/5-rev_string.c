#include "main.h"
/**
 * rev_string - reversing a string
 * @s: parameter s
 */
void rev_string(char *s)
{
	char s[6] = "callys";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
