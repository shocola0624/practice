#include "ft_list.h"
#include <stddef.h>

t_list  *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
    t_list  cur;

    cur = begin_list;
    while (cur)
    {
        if (!(*cmp)(cur->data, data_ref))
            return (cur);
        cur = cur->next;
    }
    return (NULL);
}