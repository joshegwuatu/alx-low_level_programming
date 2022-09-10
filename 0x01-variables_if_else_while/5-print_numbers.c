#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Prints all integers from 1 to 9
 * 
 *  Return 0 (success)
 */

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
	printf("%d", i);
    printf("\n");

    return (0);
}
