#include "printf.h"


int ft_putp_len(unsigned long ptr)
{
    if (!ptr)
    {
        write(1, "(nil)", 5);
        return (0);

    }
}