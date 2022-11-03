#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square root of a number
 * @num: the square root to be found
 * Return: -1 if no natural square root
 * @root:root to be tested
 */
	int find_sqrt(int num, int root);
	int _sqrt_recursion(int n);
/**
 * find_sqrt - finds natural square root of an inputted number
 * @num: number to find it square root
 * @root: root to be tested
 * Return:square root of n if it has natural root
 * and -1 if it doesnt have
 */
	int find_sqrt(int num, int root)
{
		if ((root * root) == num)
			return (root);

		else if (root == num / 2)
			return (-1);
	
		else
			return (find_sqrt(num, root + 1));
}
	
	int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (find_sqrt(n, root));
}

