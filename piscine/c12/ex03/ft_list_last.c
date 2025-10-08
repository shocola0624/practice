#include "ft_list.h"
#include <stddef.h>

t_list  *ft_list_last(t_list *begin_list)
{
    t_list  *cur;

    cur = begin_list;
    if (!begin_list)
        return (NULL);
    while (cur->next)
        cur = cur->next;
    return (cur);
}