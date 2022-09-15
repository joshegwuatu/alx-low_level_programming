#include "main.h"

/**
 * print_sign - check main
 * @c: An input number
 * Description: function checks for sign of integer
 * Return: 1, 0 or -1 
 */
int print_sign(int n)
{
	
	int number;

	if (n > 0)
	
		_putchar('+');
		number = 1;
	}
	else if (n == 0)
	{
		number = 0;
		_putchar('0');
	}
	else if (n < 0) 
	{
		number = -1;
		_putchar('-');
	}


	return (number);
}
