/**
 * print_name - prints name.
 * @name: name of the person
 *
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
