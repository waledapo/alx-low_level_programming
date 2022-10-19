#include "main.h"
/**
 *_islower- checks if the value is lower
 *@c: the character to be checked
 *Return: 1 if it is a lower case and zero if otherwise
 */
	int  _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
