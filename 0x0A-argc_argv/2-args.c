#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc:character counter
 * @argv:string array
 * Return:Always 0
 */
	int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
