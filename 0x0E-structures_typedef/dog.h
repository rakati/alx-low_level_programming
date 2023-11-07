#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog info
 * @name: string dog name
 * @age: float dog age
 * @owner: string owner name
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
