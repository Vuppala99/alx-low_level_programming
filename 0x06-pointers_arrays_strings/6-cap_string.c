#include "main.h"
/**
 * cap_string - convert to upper case of string
 * @s: string to pass
 *
 * Return: pointer
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		if (check_seperators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}

		return (s);
}
/**
 * check_seperators - seperations
 * @c: input
 * Return: 1 if success
 */
int check_seperators(char c)
{
	int i = 0;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };

	for (; i < 13; i++)
	{
		if (c == seperators[i])
			return (i);
	}

	return (1);
}
