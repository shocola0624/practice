#include "ft_list.h"
#include <stddef.h>

t_list  *ft_list_push_strs(int size, char **strs)
{
    int     i;
    t_list  *list;
    t_list  *head;

    if (!strs || size <= 0)
        return (NULL);
    i = 0;
    head = NULL;
    while (i < size)
    {
        list = ft_create_elem(strs[i++]);
        list->next = head;
        head = list;
    }
    return (head);
}