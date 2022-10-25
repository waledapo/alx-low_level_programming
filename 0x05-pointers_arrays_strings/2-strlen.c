#include "main.h"
#include <string.h>

/**
 * _strlen -  a function that returns the length of a string
 * @s: the string amount
 * Return: Nothing
 */
	int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
