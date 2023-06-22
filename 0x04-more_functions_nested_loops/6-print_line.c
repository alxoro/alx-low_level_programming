#include "main.h"
<<<<<<< HEAD
/**
*print_line - print line
*@n: input value
*Description: draws a straight line in the terminal
*Return: Always (0)
*/
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
=======

/**
  * print_line - Draws a straight line according to parameter
  * @n: The number of lines to draw
  *
  * Return: empty
  */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
>>>>>>> c206ca37a1648842b5c59b7e2f839166a6d49d3a
}
