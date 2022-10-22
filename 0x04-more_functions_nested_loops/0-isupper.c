#include "main.h"
/**
 * _isupper-prints uppercases
 * @c: character to be worked on
 * Return: 1 if character is upper case
 */
	int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}

