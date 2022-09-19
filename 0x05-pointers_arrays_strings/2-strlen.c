#include "main.h"
#include <stdio.h>
/**
 * _strlen - print lenght of a string
 * @s: s is a string passed as pointer
 *
 * Return: count
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;


	return (count);
}
