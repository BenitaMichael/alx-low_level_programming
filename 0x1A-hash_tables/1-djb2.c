#include "hash_tables.h"

/**
 * hash_djb2 - Function to implement the djb2 algorithm
 * @str: The string to hash
 * Return: The calculated hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int ind;

	hash = 5381;
	while ((ind = *str++))
		hash = ((hash << 5) + hash) + ind; /* hash * 33 + ind */

	return (hash);
}
