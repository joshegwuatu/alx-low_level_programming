#include "main.h"

/**
 * print_alphabet_x10: - Check main
 * Description: funtion to print letters of the alphabet 10 times
 * using _putchar
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int i;
	char j;
	for (i = 0; i < 10 ; i++)
	{
		for(j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
