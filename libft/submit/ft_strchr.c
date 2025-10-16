/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skotera <skotera@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:04:37 by skotera           #+#    #+#             */
/*   Updated: 2025/10/16 19:04:37 by skotera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == (unsigned char)c)
            return ((char *)&s[i]);
        i++;
    }
    if (c == 0)
        return ((char *)&s[i]);
    return (NULL);
}