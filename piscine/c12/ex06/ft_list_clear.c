#include "ft_list.h"
#include <stdlib.h>

void    ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
    t_list  *cur_list;
    t_list  *next_list;

    cur_list = begin_list;
    while (cur_list)
    {
        next_list = cur_list->next;
        if (free_fct)
            free_fct(cur_list->data);
        free(cur_list);
        cur_list = next_list;
    }
}