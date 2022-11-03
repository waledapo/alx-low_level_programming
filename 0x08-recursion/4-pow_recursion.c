#include "main.h"
/**
 *  _pow_recursion -  a function that returns the value of x raised
 *  to the power of y
 *  @x:the base integer
 *  @y:the power integer
 *  Return: -1 for error, 1 for  zero power
 *  and the recursive call
 */
	int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
