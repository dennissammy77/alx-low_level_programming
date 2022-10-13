#include "dog.h"
#include <stdlib.h>

/**
 * int_dog - function that initializes variable type.
 * @d:var.
 * @name:name.
 * @age:age.
 * @owner:owner.
 */

void int_dog(struct dog *d,char *name, char *owner,float *age)
{
	if (d == NULL)
	{
		return (0);
	}else{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
