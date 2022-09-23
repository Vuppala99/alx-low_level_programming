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

	while (s[i] != '\0')
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == '.') && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		else if ((s[0] >= 97 && s[0] <= 122))
			s[0] -= 32;
		else
			s[i] = s[i];
		i++;
	}

	return (s);
}
