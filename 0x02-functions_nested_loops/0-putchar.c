/**
  * main - Entry point
  * Return: Always 0 (Success)
  * print_alphabet (void) - function print _putchar in lowercase alphabet
  * Author: ATAUBO MBAKWA ANJOANEI
  */

#include "main.h"

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}
