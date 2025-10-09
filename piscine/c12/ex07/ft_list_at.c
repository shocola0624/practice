#include "ft_list.h"
#include <stddef.h>

t_list  *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    int     i;
    t_list  *cur;

    i = 0;
    cur = begin_list;
    while (i < nbr)
    {
        if (!cur)
            return (NULL);
        cur = cur->next;
        i++;
    }
    return (cur);
}