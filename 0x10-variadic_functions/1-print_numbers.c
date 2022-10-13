#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - function to print numbers
  *
  * @separator: string to be printed between numbers
  * @n: number pf integers passed to the function
  *
  * Return: Always 0
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		int j;

		j = va_arg(ap, int);
		printf("%d", j);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
