#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers from n to 98
 * @n: n is passed as argument
 *
 * Return: integer
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99 ; i++)
	{
		printf("%d", i);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
