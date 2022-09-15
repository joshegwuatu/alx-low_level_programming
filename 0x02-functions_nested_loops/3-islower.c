#include "main.h"

/**
 * _islower - check main
 * @c: An input character
 * Description: function checks for lowercase letter
 * Return: 1 if alphabet is lowercase and 0 if uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
		if ( i == c )
			lower = 1;

	return (lower);
}
