#ifndef DOG_H
#define DOG_H
/**
 * struct dog - all your doggy specs in one structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef struct dog dog_t;

#endif
