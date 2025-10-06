#include <unistd.h>

int abs(int nb)
{
    
}

void    print_nbr(int nb)
{
    char    n;

    if (nb >= 10)
        print_nbr(nb / 10);
    n = nb % 10 + '0';
    write (1, &n, 1);
}