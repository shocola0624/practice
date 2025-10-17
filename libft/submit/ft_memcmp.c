/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skotera <skotera@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:17:17 by skotera           #+#    #+#             */
/*   Updated: 2025/10/17 14:17:17 by skotera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    unsigned char   *p1;
    unsigned char   *p2;

    if (n == 0)
        return (0);
    i = 0;
    p1 = (unsigned char *)s1;
    p2 = (unsigned char *)s2;
    while (i < n)
    {
        if (p1[i] != p2[i])
            return (p1[i] - p2[i]);
        i++;
    }
    return (0);
}