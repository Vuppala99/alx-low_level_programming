#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, k;

	for (k = 0; k < 10; k++)
	{
	for (i = 48; i < 58; i++)
		_putchar(i);
	for (j = 10; j < 15; j++)
	{
		_putchar((j / 10) + '0');
		_putchar((j % 10) + '0');
	}
	_putchar('\n');
	}
}
