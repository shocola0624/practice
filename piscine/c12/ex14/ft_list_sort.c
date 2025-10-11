#include "ft_list.h"

void    ft_list_swap(t_list **cur)
{
    t_list  *a;
    t_list  *b;

    a = *cur;
    b = a->next;
    if (!b)
        return ;
    a->next = b->next;
    b->next = a;
    *cur = b;
}

void    ft_list_sort(t_list **begin_list, int (*cmp)())
{
    int     flag;
    t_list  **cur;
    t_list  *next;

    if (!begin_list || !*begin_list)
        return ;
    flag = 1;
    while (flag > 0)
    {
        flag = 0;
        cur = begin_list;
        while ((*cur) && (*cur)->next)
        {
            next = (*cur)->next;
            if ((*cmp)((*cur)->data, next->data) > 0)
            {
                ft_list_swap(cur);
                flag++;
            }
            cur = &(*cur)->next;
        }
    }
}