#include "main.h"
/**
 * clear_bit - for setting value of bit to 0
 * @n:it is a pointer to a number to be changed
 * @index:index of the bit to be cleared
 * Return:success for 1 and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
