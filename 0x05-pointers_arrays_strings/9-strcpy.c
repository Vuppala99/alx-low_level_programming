#include "main.h"
/**
 * _strcpy - copy string
 * @dest: string to copy
 * @src: string to be copied
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char  *au = dest;

	while (*src)
		*dest++ = *src++;

	return (au);
}

