#include "main.h"
/**
 * _strlen - prints lenght of a string
 * @s: string to pass
 *
 * Return: lenght value
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * rev_string - reverses the string and returns to main
 * @s: s is passed as string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len, a, z;

	len = _strlen(s) - 1;
	i = 0;
	while (i < len)
	{
		a = s[i];
		z = s[len];
		s[i++] = z;
		s[len--] = a;
	}
}
