#include "main.h"
/**
 * set_bit - it sets bit to 1 ata agiven index
 * @n:pointer to number to be changed
 * @index:index of the bit to set to 1
 * Return:suuces 1 and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
