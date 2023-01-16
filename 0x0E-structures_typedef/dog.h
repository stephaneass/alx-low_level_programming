#ifndef DOG_H
#define DOG_H

/**
 * struct dog - to keep dog datas
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: keep all dog datas
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
