#include "main.h"
/**
*katam_amon -  count money rider
*Return: void.
*/
void  jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour <= 23; hour++)
{
for (minute = 0; minute <= 59; minute++)
{
_putchar('0' + (hour / 10));
_putchar('0' + (hour % 10));
_putchar(':');
_putchar('0' + (minute / 10));
_putchar('0' + (minute % 10));
_putchar('\n');
}
}
}
