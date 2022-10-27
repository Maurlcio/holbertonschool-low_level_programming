#ifndef DOG
#define DOG

/**
 * struct dog - dog!
 * @name: Lucky
 * @age: 4
 * @owner: Mauricio de Betolaza
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void free_dog(dog_t *d);
#endif
