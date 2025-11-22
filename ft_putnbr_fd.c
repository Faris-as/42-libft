#include "libft.h"


void ft_putnbr_fd(int n, int fd)
{
    long i;

    i = n;
    if(i < 0 )
    {
        ft_putchar_fd('-', fd);
        i *= -1;
    }
    if(i >= 0)
    {
        if(i >= 10)
        {
            ft_putnbr_fd(i / 10, fd);
            ft_putnbr_fd(i % 10, fd);
        }
        if(i < 10)
        {
            ft_putchar_fd(i + '0', fd);
        }
    }
}

// int main()
// {
//     ft_putnbr_fd(-2147483648, 1);
// }