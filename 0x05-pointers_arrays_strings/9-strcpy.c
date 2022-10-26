#include "main.h"
/**
 * _strcpy-a function that copies the string pointed to by src,
 *  including the terminating null byte (\0), to the buffer pointed to by dest.
 *  @dest: a buffer
 *  @src:source string to copy
 *  Return: the value dest
 */
	char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
