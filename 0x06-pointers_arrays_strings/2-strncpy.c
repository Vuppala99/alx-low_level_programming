#include "main.h"
/**
 * *_strncpy - copies string upto n bytes
 * @dest: string to place copied text
 * @src: string to be copied upto n bytes
 * @n: n bytes
 *
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;
	char *tem = src;
	int srclen = 0, i;

	while (*src)
	{
		srclen++;
		src++;
	}
	srclen++;
	src = tem;
	if (n > srclen)
		n = srclen;
	for (i = 0; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
