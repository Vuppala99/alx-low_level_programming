#include "main.h"
/**
 * _strlen - prints lenght of a string
 * @s : passed as string
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
 * puts2 - prints alternate charecter
 * @str: passed as parameter
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, len;

	len = _strlen(str) - 1;
	i = 0;
	while (i <= len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
