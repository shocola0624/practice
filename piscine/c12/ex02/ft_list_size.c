#include "ft_list.h"
#include <stddef.h>

int ft_list_size(t_list *begin_list)
{
    int count;
    t_list  *cur;

    count = 0;
    cur = begin_list;
    if (cur == NULL)
        return (0);
    while (cur)
    {
        count++;
        cur = cur->next;
    }
    return (count);
}