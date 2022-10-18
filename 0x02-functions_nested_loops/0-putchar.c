#include <stdio.h>
/**
 * main-entry point
 * Return:zero when correct
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
	{
	putchar(word[i]);	}

	putchar('\n');
	return (0);
}
