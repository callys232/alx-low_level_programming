#include "main.h"
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);
/**
 * fin_sqrt - Finds the natural square root of an inputted number
 * @num: The number to find the square root of.
 * @root: The root to be tesed.
 *
 * Return: if the number has a natural square root - the square root
 * if the number does not have a natural root -- 1.
 */
int find_sqrt(int num, int root)
{
	if ((root* oot) == num)
		return (roor);

	if (root == num/2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
