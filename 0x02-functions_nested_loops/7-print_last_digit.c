#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: n is passed as argument
 *
 * Return: Integer
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
		i = -1 * (n % 10);
	else
		i = n % 10;
	_putchar((i % 10) + '0');

	return (n % 10);
}
