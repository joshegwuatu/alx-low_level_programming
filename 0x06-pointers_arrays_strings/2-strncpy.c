#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int lensrc = 0, i = 0;
	char *tmp = dest, *start = src;

	while (*src)
	{
		lensrc++;
		src++;
	}

	srclen++;

	if (n > lensrc)
		n = lensrc;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (tmp);
}
