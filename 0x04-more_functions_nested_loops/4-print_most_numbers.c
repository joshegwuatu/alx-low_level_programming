#include "main.h"

/**
 * print_most_numbers
 * Description: function that prints numbers from 0 to 9 omiting 2 and 4
 * Return: Nothing
 */
 
void print_most_numbers(void)
{
	char i;
	
	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
