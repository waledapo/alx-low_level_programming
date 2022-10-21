#include "main.h"
/**
 * times_table-print the timetable of 9
 */
	void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)

	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod % 10) + '0');
			if (mult == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
			_putchar('\n');
	}
}
