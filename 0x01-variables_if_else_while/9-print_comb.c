#include <stdio.h>
/**
 * main-All possible combination
 * Return: zero
 */
	int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar((num % 10) + '0');
		if (num == 9)
			continue;

		_putchar(',');
		_putchar(' ');
	}
	
	_putchar('\n');

	return (0);
}
