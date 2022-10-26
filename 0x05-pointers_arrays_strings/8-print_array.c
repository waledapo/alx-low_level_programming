#include "main.h"
/**
 * print_array -  a function that prints n elements of an array
 *  of integers, followed by a new line.
 *  @n:the number of elements of the array to be printed
 *  @a: first arguement
 */
	void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
