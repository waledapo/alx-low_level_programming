#include "main.h"
/**
 * print_square-prints squre
 * @size: the square size
 */
	void print_square(int size)
{
	int hgt, widt;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
	{
		for (widt = 0; widt < size; widt++)
			_putchar('#');
		if (size == 0)
			continue;
		_putchar('\n');
	}
	}
	_putchar('\n');
}

