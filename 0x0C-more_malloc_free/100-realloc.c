#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - it reallocates memory block using malloc and free
 * @ptr:pointer to the memory previously allocated by malloc
 * @old_size:size of the allocated memory for ptr
 * @new_size:new size of the new memory block
 * Return:pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_ptr;
	char *new_ptr;
	unsigned int count;

	old_ptr = (char *)ptr;
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}

	new_ptr = malloc(new_size);
	if (ptr == NULL)
	return (new_ptr);
	if (new_size < old_size)
	for (count = 0; count < new_size; count++)
	new_ptr[count] = old_ptr[count];

	if (new_size > old_size)
	for (count = 0; count < old_size; count++)
	new_ptr[count] = old_ptr[count];

	free(ptr);
	return (new_ptr);
}
