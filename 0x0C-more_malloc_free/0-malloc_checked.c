#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory using malloc
  *
  * @b: size of memory to be allocted
  *
  * Return: return pointer to the memory
  */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	if (b == 0)
		return (NULL);

	p = malloc(b);

	if (p == NULL)
		exit(98);
	else
		return (p);
}
