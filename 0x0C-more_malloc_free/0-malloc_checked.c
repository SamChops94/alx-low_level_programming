#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @size: size of memory.
 * @b: amount of bytes.
 * Return: a pointer to the memory
 * if malloc fails, status vavalue equals 98.
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
