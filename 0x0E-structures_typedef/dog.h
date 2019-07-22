#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define a new type of struct.
 * @name: dog name.
 * @age: age of the dog.
 * @owner: the name of the owner
 * Description: containt informaction of the dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*dog_t *new_dog(char *name, float age, char *owner);*/
/*void free_dog(dog_t *d);*/
#endif
