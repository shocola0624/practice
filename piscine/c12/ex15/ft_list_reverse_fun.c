#include "ft_list.h"

void    ft_data_swap(void **data1, void **data2)
{
    void    *tmp;

    tmp = *data1;
    *data1 = *data2;
    *data2 = tmp;
}

void    ft_list_reverse_fun(t_list *begin_list)
{
    t_list  *cur;
    t_list  *left;
    t_list  *right;

    if (!begin_list)
        return ;
    left = begin_list;
    right = begin_list;
    while (right->next)
        right = right->next;
    while (left != right)
    {
        ft_data_swap(&left->data, &right->data);
        cur = left;
        while (cur->next != right)
            cur = cur->next;
        right = cur;
        if (left != right)
            left = left->next;
    }
}