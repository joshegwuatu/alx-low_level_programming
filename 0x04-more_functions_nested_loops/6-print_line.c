nclude "main.h"

/**
 * print_line
 *@n: lenght of line
 * Description: function that prints line to n lenght
 * Return: Nothing
 */
 
void print_line(int n)
{
	int i = 0;
	char line ='_';
	if ( n > 0 )
	{
		for (; i < n; i++)
		{
			_putchar( line );
		
		}	
	}
	_putchar('\n');
}
