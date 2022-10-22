#include "main.h"
/**
 * _isdigit-a function that prints 0-9
 * @c: digit to be checked
 * Return:1 if it is a digit
 */
	int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
