#include "main.h"
/**
 * _strlen - prints lenght of a string
 * @s: passed as string
 *
 * Return: lenght
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * puts_half - print half of string
 * @str: passed as string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len, n;

	len = _strlen(str);
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
