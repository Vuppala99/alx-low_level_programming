#include "main.h"
/**
 * _isalpha - check whether parameter is alphabet
 * @c: c is passed as argument
 *
 * Return: 1 if cis alphaber otherwise 0
 */
int _isalpha(int c)
{
	char i, j;
	int alpha = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			alpha = 1;
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		if (j == c)
			alpha = 1;
	}
	return (alpha);
}
