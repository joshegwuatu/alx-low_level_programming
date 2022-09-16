#include "main.h"

/**
 * jack_bauer - Check Main
 * Description: function prints every minute in one day
 * Return: Nothing
 */
 
int _isupper(int c)
{
	char i;
	int isupper = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
