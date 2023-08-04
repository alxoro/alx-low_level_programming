#include "main.h"
/**
 * get_endianness - for checking type of the machine
 * Return:if big 0 and 1 if it is little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
