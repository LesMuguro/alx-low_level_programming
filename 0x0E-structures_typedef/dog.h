
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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void dog_t *new_dog(char *name, float age, char *owner);
#endif
