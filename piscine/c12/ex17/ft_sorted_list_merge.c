#include "ft_list.h"

void    ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
    int (*cmp)())
{
    t_list  **cur1;
    t_list  *cur2;
    t_list  *next;

    if(!begin_list1 || !cmp)
        return ;
    cur1 = begin_list1;
    cur2 = begin_list2;
    while (cur2)
    {
        while (*cur1 && (*cmp)((*cur1)->data, cur2->data) <= 0)
            cur1 = &(*cur1)->next;
        next = cur2->next;
        cur2->next = *cur1;
        *cur1 = cur2;
        cur2 = next;
    }
}