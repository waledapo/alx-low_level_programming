#include "main.h"
/**
 * _isalpha-checks for alphabetical character
 * @c:character being checked
 * Returns: 1 if c is a letter and 0 if otherwise
 * Return: 1 if c is a lower case or upper case and zero otherwise
 */
	int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
