#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 *
 * @s: string to check length
 * Return: returns the length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i++;
	return (i);
}

/**
 * _strcpy - copies an entire string to another
 *
 * @src: source string
 * @dest: destination buffer
 * Return: returns pointer to copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i, length = _strlen(src);
	char *retString;

	for (i = 0 ; i <= length ; i++)
	{
		dest[i] = src[i];
	}
	retString = dest;
	return (retString);
}

/**
 * new_dog - creates a new dog structure
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 * Return: returns pointer to the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_copy;

	dog_copy = malloc(sizeof(dog_t));
	if (dog_copy)
	{
		dog_copy->name = malloc(sizeof(char) * _strlen(name));
		if (dog_copy->name)
		{
			dog_copy->owner = malloc(sizeof(char) * _strlen(owner));
			if (dog_copy->owner)
			{
				_strcpy(dog_copy->name, name);
				dog_copy->age = age;
				_strcpy(dog_copy->owner, owner);
				return (dog_copy);
			}
			else
			{
				free(dog_copy->name);
				free(dog_copy);
			}
		}
		else
		{
			free(dog_copy);
		}
	}
	return (NULL);
}
