/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skotera <skotera@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:40:21 by skotera           #+#    #+#             */
/*   Updated: 2025/10/16 13:40:21 by skotera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, unsigned int n)
{
    unsigned char *p;

    p = (unsigned char *)s;
    while (n--)
        *p++ = '\0';
}