/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 * @array: array input
 * @size: the size of the array
 * @action: pointer to the function you need
 *
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
