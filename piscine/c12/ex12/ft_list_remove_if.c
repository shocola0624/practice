#include "ft_list.h"
#include <stdlib.h>

void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
    void (*free_fct)(void *))
{
    t_list  **cur;
    t_list  *del;

    if (!begin_list || !cmp || !free_fct)
        return ;
    cur = begin_list;
    while (*cur)
    {
        if ((*cmp)((*cur)->data, data_ref) == 0)
        {
            del = *cur;
            *cur = (*cur)->next;
            (*free_fct)(del->data);
            free(del);
        }
        else
            cur = &(*cur)->next;
    }
}