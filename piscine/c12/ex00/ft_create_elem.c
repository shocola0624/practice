#include "ft_list.h"
#include <stdlib.h>

t_list  *ft_create_elem(void *data)
{
    t_list  *elem;

    elem->data = (struct s_list *)malloc(sizeof(data));
    elem->data = data;
    elem->next = NULL;
    return (elem);
}