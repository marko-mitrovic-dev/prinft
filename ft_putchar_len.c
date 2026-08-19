#include "ft_printf.h"

int	ft_putchar_len(char c)
{
	write(1, &c, 1);
	return (1); 
}

// Odštampali smo tačno 1 karakter