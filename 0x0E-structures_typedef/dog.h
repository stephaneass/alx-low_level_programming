#ifndef DOG_H
#define DOG_H

/**
 * File: dog.h
 * Desc: Header file that defines a new type struct dog.
 */

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

#endif
