#include "main.h"
/**
 * print_triangle- for printing triangle
 * @size:gave traingle size
 */
	void print_triangle(int size)
{
	int hgt, index;

	if (size > 0)
	{
		for (hgt = 1; hgt <= size; hgt++)
		{
			for (index = size - hgt; index < hgt; index--)
				_putchar(' ');
			for (index = 0; index < hgt; index++)
				_putchar('#');
			if (hgt == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
