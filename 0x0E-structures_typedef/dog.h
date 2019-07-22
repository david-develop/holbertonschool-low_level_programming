#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define a new type of struct.
 * @name: dog name.
 * @age: age of the dog.
 * @owner: the name of the owner
 * Description: containt informaction of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
