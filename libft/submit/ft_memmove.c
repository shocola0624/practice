/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skotera <skotera@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:10:14 by skotera           #+#    #+#             */
/*   Updated: 2025/10/16 17:10:14 by skotera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfh.h"

void    *ft_memmove(void *dest, const void *src, unsigned int n)
{
    unsigned char       *d;
    const unsigned char *s;

    if (dest == src || n == 0)
        return (dest);
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    if (dest > src)
    {
        while (n--)
            d[n] = s[n];
    }
    else
    {
        while (n--)
            *d++ = *s++;
    }
    return (dest);
}