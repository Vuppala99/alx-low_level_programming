#include "main.h"
/**
 * print_rev - print reverse string
 * @s: string reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0, count = 0;

	while (s[i] != '\0')
		count++;
	i = count - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
