#include "main.h"

/**
 * _puts_recusrion - Prints a string, followed by new line using recursion.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s);
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
