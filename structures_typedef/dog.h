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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
