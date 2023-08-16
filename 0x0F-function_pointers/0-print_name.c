/**
 * print_name - Prints a name using format designated to function pointer parsed as argument.
 * @name: Name of print
 * @f: Function pointer.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
