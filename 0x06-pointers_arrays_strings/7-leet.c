#include "main.h"
/**
 * leet - convert certain letters to numbers
 * @s: string
 *
 * Return: 1 if success
 */
char *leet(char *s)
{
	int i = 0, j = 0, k = 0;
	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	while (s[i] != '\0')
	{
		while (l[j] != '\0')
		{
			if (s[i] == l[j])
			{
				k = j;
				s[i] = e[k];
			}
			j++;
		}
		i++;
	}

	return (s);
}

