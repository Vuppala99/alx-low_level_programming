#include "main.h"
/**
 * _islower - check whether given input is lower case
 * @c: c is passed as parameter
 *
 * Return: 1 if c is lowercase or 0 if uppercase
 */
int _islower(int c)
{
	char i;
	int check = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			check = 1;
	}
	return (check);
}

