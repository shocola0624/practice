/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skotera <skotera@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:20:14 by skotera           #+#    #+#             */
/*   Updated: 2025/10/16 19:20:14 by skotera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char    *ft_strrchr(const char *s, int c)
{
    int     i;
    char    *last;

    i = 0;
    last = NULL;
    while (s[i])
    {
        if (s[i] == c)
            last = (char *)&s[i];
        i++;
    }
    if (c == 0)
        return ((char *)&s[i]);
    return (last);
}