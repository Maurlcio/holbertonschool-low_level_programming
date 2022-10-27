#ifndef DOG
#define DOG

/**
 * struct dog - dog!
 * @name: Lucky
 * @age: four
 * @owner: Mauricio de Betolaza
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);

#endif
