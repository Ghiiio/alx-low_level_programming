#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - fuction that returns the sum of all parameters
  *
  * @n: number of parameter to be summed up
  *
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for(i = 0; i < n; i++)
		sum += va_arg(ap, int);
	return (sum);
	_putchar('\n');
	va_end(ap);
}
