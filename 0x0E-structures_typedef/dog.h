#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: shows some informations about a dog
 */

struct dog
{

	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);


#endif /* DOG_H */
