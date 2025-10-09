#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list  *cur;

    cur = begin_list;
    if (!cur)
        return ;
    while (cur)
    {
        (*f)(cur->data);
        cur = cur->next;
    }
}