#include <stdarg.h>
#include <stdio.h>
#include "variadic_function.h"

/**
 * print_all - Entry Point
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: 0
 */
{void print_all(const char * const format, ...)
{
    va_list argz;
    char *check;
    char *sep = "";
    int i = 0;
    va_start(argz, format);
    
    while(format && format[i])
        {
            switch(format[i])
            {
                case 'c':
                printf("%s%c", sep, va_arg(argz, int));
                break;
                
                case 'i':
                printf("%s%d", sep, va_arg(argz, int));
                break;
                case 'f':
                printf("%s%f", sep, va_arg(argz, double));
                break;
             
                case 's':
                check = va_arg(argz, char*);
                if (check == NULL)
                    check = "(nil)";
                printf("%s%s", sep, check);
                break; 
            }
            sep = ", ";
            i++;
        }
    va_end(argz);
    printf("\n");
}