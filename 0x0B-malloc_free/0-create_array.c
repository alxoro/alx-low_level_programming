< < < < < < < HEAD
< < < < < < < HEAD
#include "main.h"
#include <stdlib.h>
= = = = = = =
= = = = = = =
> > > > > > > 8657fca78602de11eb524c9fb9bb9db3ad4320f1
#include <stdlib.h>
> > > > > > > 8657fca78602de11eb524c9fb9bb9db3ad4320f1
#include <stdio.h>
/**
 * create_array - it creates an array of chars
 * and initializes it with a specific char
 * @size: input size
 * @c: input character
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	arr = (char *) malloc(size);
	if (size == 0 || arr == NULL)
{
	return (NULL);
}
	for (i = 0; i < size; i++)
{
	arr[i] = c;
}
	return (arr);
}
