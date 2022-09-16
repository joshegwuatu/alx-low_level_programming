#include "main.h"

/**
 * print_line
 * @n: lenght of line
 * Description: function that prints line to n lenght
 * Return: Nothing
 */
 
void print_line(int n)
{
	int i = 0;

	if ( n > 0 )
	{
		for (; i < n; i++)
		{
			_putchar( '_' );
		
		}	
	}
	_putchar('\n');
}
