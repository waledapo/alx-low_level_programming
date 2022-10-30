#include "main.h"
/**
 * _strncat - function is similar to the _strcat function,
 * @dest:destination string
 * @src: source
 * @n:n bytes from src
 * Return:value of dest
 */
	char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
