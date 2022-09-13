#include "main.h"
/**
 * print_sign - check sign of number
 * @n: n is passed as argument
 *
 * Return: 1 if n greater than 0 or 0 if n is zero or -1 if nis less than 0
 */
int print_sign(int n)
{
	int print_sign;

	if (n > 0)
	{
		print_sign = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		print_sign = 0;
		_putchar('0');
	}
	else
	{
		print_sign = -1;
		_putchar('-');
	}

	return (print_sign);
}

