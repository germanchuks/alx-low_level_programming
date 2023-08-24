#include "lists.h"

void initialStatement(void) __attribute__((constructor));

/**
 * initialStatement - Prints some sentence before the main function is executed
 *
 * Return: Nothing
*/
void initialStatement(void)
{
        printf("You're beat! and yet, you must allow,\n");
        printf("I bore my house upon my back!\n");
}
