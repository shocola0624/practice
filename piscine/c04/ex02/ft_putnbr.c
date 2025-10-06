#include <unistd.h>

int abs(int nb)
{
    if (nb < 0)
        nb *= -1;
    return (nb);
}

void    print_nbr(int nb)
{
    char    n;

    if (nb >= 10)
        print_nbr(abs(nb / 10));
    n = abs(nb % 10) + '0';
    write (1, &n, 1);
}

void    ft_putnbr(int nb)
{
    if (nb < 0)
        write (1, "-", 1);
    print_nbr(nb);
}