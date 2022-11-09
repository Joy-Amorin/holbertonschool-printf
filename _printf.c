#include<stdio.h>
#include<stdarg.h>
#include <string.h>
#include "main.h"

int _printf(const char *format, ...)
{

	int h = 0;
	
	int j = 0;

	long unsigned int i = 0;

	char t;
	
	char *p;

	va_list data_type;
	
	if (format == NULL)
		return (-1);

	va_start(data_type, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{	
				i++;
				switch(format[i])
				{	
					case 'd': 
						j = va_arg(data_type, int);
						function(j);
						break;
					case 'i':
						j = va_arg(data_type, int);
						function(j);
						break;
					case 's':
						p = va_arg(data_type, char *);
						for (h = 0; p[h] != '\0'; h++)
							putchar(p[h]);
						break;
					case 'c': 
						t = va_arg(data_type, int);
						putchar(t);
						break;
					case '%':
						putchar('%');
						break;
				}
		}
		else
			putchar(format[i]);
	}
	va_end(data_type);
	return (0);
}
