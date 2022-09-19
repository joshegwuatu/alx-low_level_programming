#include "main.h"

/*
 * swap_int: Function swaps integer values of pointer addresses
 * @a: pointer to address a
 * @b: pointer to address b
 * Description: Function to swap two values
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
