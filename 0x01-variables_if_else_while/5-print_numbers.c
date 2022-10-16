#include <stdio.h>
/**
 * main-entry point
 * Return:zero for success
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
