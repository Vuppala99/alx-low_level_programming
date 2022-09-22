#include "main.h"
/**
 * *_strncat -appends strings upto n bytes
 * @dest: string to place appended text
 * @src: string to be appended
 * @n: how many bytes string has to append
 *
 * Return: pointer temp
 */
char *_strncat(char *dest, char *src, int n)
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
	if (n > srclen)
		n = srclen;
	src = tem;
	while (*dest)
		dest++;
	for (i = 0; i < n; i++)
		*dest++ = *src++;
	*dest = '\0';

	return (temp);
}
