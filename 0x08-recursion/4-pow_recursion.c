#include "main.h"

/**
  * _pow_recursion - calculates the value of x raise to power of y
  *
  * @x: integer
  * @y: raise to power integer
  *
  * Return: value of x raise to the power of y
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	y = y - 1;
	return (x * _pow_recursion(x, y));
}
