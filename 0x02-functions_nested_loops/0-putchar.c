#include "main.h"

/**
  * main - print the word _putchar
  *
  * Return: 0 if successfu
  */
int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 9; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
