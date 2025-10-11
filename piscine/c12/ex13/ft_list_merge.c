#include "ft_list.h"

void    ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
    t_list **cur;

    if (!begin_list1 || !begin_list2)
        return ;
    cur = begin_list1;
    while (*cur)
        cur = &(*cur)->next;
    *cur = begin_list2;
}