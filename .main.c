#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        char *s = "chau";
        char y = 's';
/*      int a = 555;*/


        _printf("hola, %s\n", s);
        _printf("hola, %s, %s\n", s, s);
        _printf("%c\n", y);
        _printf("%s\n", "funciona");
        _printf("%d\n", 12345);
        _printf("%%\n");
        _printf("%d\n", 5);
        _printf("%d\n", -56561);
        _printf("%d\n", -436);
        _printf("%c\n",'c');
        _printf("%i\n", 16521);
        _printf("%d%c%s\n", 5, 'c', s);
        return (0);
} 
