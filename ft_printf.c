#include "ft_printf.h"
#include <stdarg.h>

int ft_printf(const char *str, ...)
{
    int i;
    int letter_counter;
    va_list args;

    va_start(args, str);

    i = 0;
    letter_counter = 0; 

    if (str == NULL)
        return(-1); // ili treba 0 jer je int? 

    while ( str[i] != '\0')
    {
       if (str[i] != '%')
       {
        write(1, &str[i], 1);
        letter_counter++;
       }  else if (str[i] == '%' && str[i + 1] == 'c')
       {
        ft_putchar_len(va_arg(args, int));
        letter_counter++;
        i++;
       } else if (str[i] == '%' && str[i + 1] == '%')
       {
        write(1, &str[i], 1);
        letter_counter++;
        i++;
       }

       i++;
    }
    (args);

    return(letter_counter);
    }



    /*
    standard printf returns -1 if forwarded invalid pointer
     */