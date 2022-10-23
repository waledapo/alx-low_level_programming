#include <stdlib.h>
#include <stdio.h>
/**
 * main-prints 1-10 and multiple of 3 as fizz and buzz
 * Return:zero
 */
	int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FIZZBUZZ");
		else if ((num % 3) == 0)
			printf("FIZZ");

		else if ((num % 5 == 0))
			printf("BUZZ");
		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
