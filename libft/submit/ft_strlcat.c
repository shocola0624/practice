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

size_t  ft_strlcat(char *restrict dest, const char *restrict src,
    size_t n)
{
    size_t  i;
    size_t  src_len;
    size_t  dest_len;

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