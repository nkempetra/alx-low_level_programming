#include "dog.h"

/**
* init_dog - inits a variable of
*type dog
*@d: dog identification
*@name: name of dog
*@age: age of dog
*@owner: owner's name
*/

struct dog
{
    char *name;
    float age;
    char *owner;
};

void main()
{
    struct dog d = { 'name', 40, 'owner'};
}
