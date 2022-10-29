#include "main.h"
/**
 *_strcat- concatenates two strings
 * @src: source string to be appended to destination
 * @dest:destination string
 * Return: a pointer to string.
 */
	char *_strcat(char *dest, char *src)
{
	int s1, s2;

	s1 = 0;
	while (dest[s1] != '\0')
	{
		s1++;
	}

	s2 = 0;
	while (src[s2] != '\0')
	 {
		 dest[s1] = src[s2];
		 s1++;
		 s2++;
	 }
	 dest[s1] = '\0';
	 return (dest);
}
