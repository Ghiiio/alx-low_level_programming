#include "main.h"

/**
  * _isupper - check uppercase charaacter int c
  *
  * @c: paramter to check uppercase
  *
  * Return: 1
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
