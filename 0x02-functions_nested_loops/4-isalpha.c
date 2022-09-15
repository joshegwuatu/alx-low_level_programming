#include "main.h"

/**
 * _isalpha - check main
 * @c: An input character
 * Description: function checks for alphabet
 * Return: 1 if letter is alphabet and 0 if not
 */
int _isalpha(int c)
{
	char i, j;
	int alphabet = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
			if (c == i || c == j)
				alphabet = 1;
	}

	return (alphabet);
}
