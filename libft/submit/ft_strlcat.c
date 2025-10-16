/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skotera <skotera@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:29:41 by skotera           #+#    #+#             */
/*   Updated: 2025/10/16 18:29:41 by skotera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int    strlcat(char *restrict dest, const char *restrict src,
    unsigned int n)
{
    unsigned int    i;
    unsigned int    src_len;
    unsigned int    dest_len;

    i = 0;
    src_len = 0;
    while (src[src_len])
        src_len++;
    while (dest[i] && i < n)
        i++;
    if (i >= n)
        return (src_len + n);
    dest_len = i;
    while (i < n - 1 && src[i - dest_len])
    {
        dest[i] = src[i - dest_len];
        i++;
    }
    dest[i] = '\0';
    return (dest_len + src_len);
}