#include "main.h"
/**
 * _strlen - a function that returns the lenght of a string.
 * @s: An input string
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);

}
