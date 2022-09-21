#include "main.h"
/**
 * *_strcat - append string to another string
 * @dest: string to add appended text
 * @src: string to be appended
 *
 * Return: temp pointer
 */
char *_strcat(char *dest, char *src)
{
	char *tem = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';

	return (tem);
}
