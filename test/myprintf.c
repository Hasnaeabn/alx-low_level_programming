#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * _printf - my own printf function.
 * @format: argument.
 *
 * Return: number of characters.
 */

int _printf(const char *format, ...) 
{
	va_list args;
	int count = 0;
	
	va_start(args, format);
	
	while (*format) 
	{
		if (*format == '%') 
		{
			switch (*(++format)) 
			{
				case 'c':
					putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					printf("%s", va_arg(args, char *));
					count += strlen(va_arg(args, char *));
					break;
				case '%':
					putchar('%');
					count++;
					break;
				default:
					break;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		++format;
	}
	va_end(args);
	return (count);
}
