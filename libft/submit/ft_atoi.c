/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:00:32 by marvin            #+#    #+#             */
/*   Updated: 2025/10/07 21:00:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int neg;
    int res;

    i = 0;
    neg = 1;
    res = 0;
    while ((9 <= str[i] && str[i] <= 13) || str[i] = ' ')
        i++;
    if (str[i] == '-')
        neg = -1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while ('0' <= str[i] && str[i] <= '9')
        res = (res * 10) + str[i++] - '0';
    return (neg * res);
}