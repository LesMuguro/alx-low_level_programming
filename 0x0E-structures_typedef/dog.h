
#ifndef STDIO_H
#define STDIO_H
/**
 * struct dog - struct for name, age and owner
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: this is a struct for a dog's name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * struct dog_t - struct for name, age and owner
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: this is a new name for the type struct dog
 */
struct dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
