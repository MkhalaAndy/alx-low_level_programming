#ifndef DOG_H
#define DOG_H
/**
 *struct dog- comtains a string for a dogs detail
 * including name of dog, age and name of owner
 * @name:name of dog
 * @age:age of dog
 * @owner:name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t- typedef for struct dog
 */
typedef struct dog dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
