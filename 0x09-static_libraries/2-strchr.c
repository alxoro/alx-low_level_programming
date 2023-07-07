#include "main.h"
#include <stdio.h>

/**
 * _strchr - it locates a character
 * @s: input string
 * @c: input character
 * Description: locates a character in a string
 * Return: returns aptr to the 1st occurence
 * the char c in str s, else, return NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL)
}
