/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: n variables
 *
 * Return: sum of n
 */



#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...) {
  int sum = 0;
  va_list args;
  va_start(args, n);

  for (unsigned int i = 0; i < n; i++) {
    sum += va_arg(args, int);
  }

  va_end(args);

  return sum;
}
