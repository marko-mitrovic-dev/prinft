#include "printf.h"


int ft_putp_len(unsigned long ptr)
{
    int len;

    len = 0;
    if (!ptr)
    {
        write(1, "(nil)", 5);
        return (0);

    }
    len += ft_putstr_len("0x");

    if  (ptr > 15)
    {
        len += ft_putp_len(ptr / 16); 
		len += ft_putp_len(ptr % 16);
    }
    else if (ptr <= 9)
    {
        len += ft_putchar_len(ptr + '0');
    }
    else
            len += ft_putchar_len(ptr - 10 + 'a');
    
    return(len);
}