#include "printf.h"

int ft_putx_len(unsigned int n)
{
    int len;
    
    len = 0;
    if  (n > 15)
    {
        len += ft_putuint_len(n / 16); 
		len += ft_putuint_len(n % 16);
    }
    else if (n <= 9)
    {
        len += ft_putchar_len(n + '0');
    }
    else
    {
        len += ft_putchar_len(n - 10 + 'a');
    }
    
    return(len);
    
}