/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skotera <skotera@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:39:47 by skotera           #+#    #+#             */
/*   Updated: 2025/10/17 10:39:47 by skotera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char   *p;
    unsigned char   uc;

    i = 0;
    p = (unsigned char *)s;
    uc = (unsigned char)c;
    while (i < n)
    {
        if (p[i] == uc)
            return ((void *)&s[i]);
        i++;
    }
    return (NULL);
}