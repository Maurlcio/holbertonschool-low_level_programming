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

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif
