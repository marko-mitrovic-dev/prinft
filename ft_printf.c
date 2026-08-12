#include "ft_printf.h"
#include <stdarg.h>

int ft_printf(const char *, ...)
{
    int i;
    int letter_counter;

    i = 0;
    letter_counter = 0; 

    if (char * == NULL)
        return(NULL); // ili treba 0 jer je int? 

    while ( char *[i] != '\0')
    {
       if (char *[i] != '%')
       {
        write(1, '%', 1);
       }  else if (char *[i] == '%' && char *[i + 1] == 'c')
       {
        write(1, va_arg, 1);
        letter_counter++;
       } else if (char *[i] == '%' && char *[i + 1] == '%')
       {
        write(1, '%', 1);
        letter_counter++;
       }


    }

    return(letter_counter);
    }