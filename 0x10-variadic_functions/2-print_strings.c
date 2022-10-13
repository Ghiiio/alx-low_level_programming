#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - function to print string
  *
  * @separator: string to be printed between the string
  * @n: number of string passed to the function
  *
  * Return:  void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		if (string == NULL)
			printf("nil");
		else
		{
			printf("%s", va_arg(string, char*));
			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(string);
	printf("\n");
}
