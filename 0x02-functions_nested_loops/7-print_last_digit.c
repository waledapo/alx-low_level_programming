#include "main.h"
/**
 * print_last_digit-gives the last digit of the number
 * @n:the last digit to be observes
 * Return: the value expected to be returned
 */
	int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	_putchar((n % 10) + '0');
	return (n % 10);
}
