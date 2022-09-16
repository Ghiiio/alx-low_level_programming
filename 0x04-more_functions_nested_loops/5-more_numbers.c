#include "main.h"

/**
  * main - check the code
  */
void more_numbers(void)
{
	int b;
	char c;

	for (b = 0; b <= 10; b++)
	{

		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
