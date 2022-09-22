#include "main.h"
/**
 * string_toupper - convert lower case to upper case
 * @s: string
 *
 * Return: pointer
 */
char *string_toupper(char *s)
{
	char *tem = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}

	return (tem);
}

