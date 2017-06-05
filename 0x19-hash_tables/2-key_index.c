#include "hash_tables.h"
/**
  * key_index - function that gives the index of a key
  * @key: the key of the hashtable
  * @size: the size of the array
  * Return: the index at which the key/value pair is stored in
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashedNum, idx;

	hashedNum = hash_djb2(key);
	idx = hashedNum % size;
	return (idx);
}
