#include "main.h"

/**
  * print_sign - prints the sign of a number 
  * @n: is int that will use for the argument of the function
  * Return: 1 and prints + if n is greater than 0
  * 0 and prints - if n is less than zero
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
