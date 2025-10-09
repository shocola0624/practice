#include "ft_list.h"

void    ft_list_foreachif(t_list *begin_list, void (*f)(void *), void
    *data_ref, int (*cmp)())
{
    t_list  *cur;

    cur = begin_list;
    if (!cur)
        return ;
    while (cur)
    {
        if (!(*cmp)(cur->data, data_ref))
            (*f)(cur->data);
        cur = cur->next;
    }
}