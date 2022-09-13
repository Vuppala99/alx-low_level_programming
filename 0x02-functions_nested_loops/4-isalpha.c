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
		alpha = 1;
	for (j = 'A'; j <= 'Z'; j++)
		alpha = 1;
	return (alpha);
}
