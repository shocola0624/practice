/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skotera <skotera@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:58:07 by skotera           #+#    #+#             */
/*   Updated: 2025/10/16 17:58:07 by skotera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *restrict dest, const char *restrict src,
    size_t n)
{
    size_t  i;

    i = 0;
    if (n > 0)
    {
        while (i < n - 1 && src[i])
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    while (src[i])
        i++;
    return (i);
}