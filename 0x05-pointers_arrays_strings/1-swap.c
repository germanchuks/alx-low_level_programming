#include "main.h"
/**
 * swap_int - Sets pointer value to 98
 *
 * @a: First value
 * @b: Second value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int *temp = a;
	*a = *b;
	*b = temp;
}
