#include "main.h"

/**
 * rev_string -  function that reverses a string.
 * @s: thereference string
 * Return: nothing
 */
	void rev_string(char *s)
{
	char *r;
	char tmp;

	r = s;
	while (*(r + 1) != '\0')
	{
	r = r + 1;
	}

	while (s < r)
	{
		/*swapping action*/
		tmp = *s;
		*s = *r;
		*r = tmp;

		s = s + 1;
		r = r - 1;
	}
}
