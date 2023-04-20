/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: n variables
 *
 * Return: sum of n
 */



int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	const int* ptr = &n + 1;
	
	for (i = 0; i < n; i++)
	{
		sum += *(ptr++);
	}
	return sum;
}
