#include "ft_list.h"

void    ft_list_push_back(t_list **begin_list, void *data)
{
    t_list  *cur;

    cur = *begin_list;
    if (!cur)
        return ;
    while (cur->next)
        cur = cur->next;
    cur->next = ft_create_elem(data);
}