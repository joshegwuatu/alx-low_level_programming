#include "main.h"

/**
 * more_numbers
 * Description: function that prints numbers from 1 to 14 ten times
 * Return: Nothing
 */
 
void more_numbers(void)
{
	int i, j = 0;

	for (; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
													if (i > 9)
				_putchar(i / 10 + '0');
													_putchar(i % 10 + '0');
												}
		_putchar('\n');
											}
}
