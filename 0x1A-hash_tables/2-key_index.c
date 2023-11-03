#include "hash_tables.h"

/**
 * key_index - current item index
 * @key: key to get index
 * @size: array item size of has table
 * Return: key index
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
