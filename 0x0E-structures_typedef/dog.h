#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - Create a structure for dog
 * @name: input stringg for dog's name
 * @age: input integer for dog's age
 * @owner: owner of dog's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void intit_dog(struct dog *d, char *name, float age, char *owner);
#endif
