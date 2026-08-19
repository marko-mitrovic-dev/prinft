#include "printf.h"

int ft_putuint_len(unsigned int n)
{
    unsigned int len;
    
    len = 0;
    if  (n > 9)
    {
        len += ft_putuint_len(n / 10); 
		len += ft_putuint_len(n % 10);
    }
    else
        len += ft_putchar_len(n + '0');
    
    return(len);
}

/*
uint - unsigned int -
 just positive numbers (0 included) 0 up to 4,294,967,295


*/