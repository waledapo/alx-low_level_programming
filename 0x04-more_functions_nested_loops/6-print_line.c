#include "main.h"
/**
 * print_line -used in printing lines
 * @n: the number of line
 */
	void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('-');
	}
	_putchar('\n');
}
