#include "ft_list.h"

void    ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
    t_list  **cur;
    t_list  *new_elem;

    while (*cur && (*cmp)((*cur)->data, data) <= 0)
        cur = &(*cur)->next;
    new_elem = ft_create_elem(data);
    new_elem->next = *cur;
    *cur = new_elem;
}