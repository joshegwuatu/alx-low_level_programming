#include "main.h"

/** _abs Checks for absolute values
 * @r: an integer input value
 * Description: This function returns the absolute value of a number
 * Return: absolute value of number r
 */
int _abs(int r)
{
	if (r >= 0)
		return(r);
	else
		return (r*-1);
}
