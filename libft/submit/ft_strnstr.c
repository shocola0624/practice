/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skotera <skotera@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:39:06 by skotera           #+#    #+#             */
/*   Updated: 2025/10/17 16:39:06 by skotera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t  i;
    size_t  j;

    i = 0;
    if (*needle == '\0')
        return ((char *)haystack);
    while (i < n)
    {
        j = 0;
        while (i + j < n && needle[j] && haystack[i + j])
        {
            if (haystack[i + j] != needle[j])
                break ;
            j++;
        }
        if (i + j >= n)
            return (NULL);
        if (needle[j] == '\0')
            return ((char *)&haystack[i]);
        i++;
    }
    return (NULL);
}