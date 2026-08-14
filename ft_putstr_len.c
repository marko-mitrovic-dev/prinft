#include "ft_printf.h"

int	ft_putstr_len(char *s)
{
    int i;
    int counter;

    counter = 0;
    i = 0;

    if(!s)
    {
        write(1, "(null)", 6);
        return (6);
    }
    
    while (s[i] != '\0')
    {
        write(1, &s[i], 1);
        counter++;
        i++;
    }
	return (counter);
}