#include <stdio.h>

/**
 * fizz_buzz
 *
 * Description: program to print numbers from 1 to 100 
 * printing fix for multiples of 3 and buzz for multiples of 5
 * and fizzbuzz for both multiples.
 * Return: Nothing
 */
 
int main(void)
{
	
	int i = 1;
	
	for (; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FixxBuzz");
		else
			printf("%d", i);
		
		printf (" ");
	}
	printf("\n");
	
}

