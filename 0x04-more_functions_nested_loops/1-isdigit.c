#include "main.h"

/**
 * _isdigit - Check Main
 * Description: function checks if a value is a digit
 * Return: function returns 1 or 0 
 */
 
int _isdigit(int c)
{
	int i;
	int is_digit = 0;

	for (i = 0; i < 10; i++)
	{
		if (c == i)
		{
			is_digit = 1;
			break;
		}
	}

    return (is_digit);
}
