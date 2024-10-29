/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:33:02 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/29 16:25:36 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1;
    const unsigned char *str2;
    size_t  index;
    
    str1 = (const unsigned char *)s1;
    str2 = (const unsigned char *)s2;
    index = 0;
    
    while (index < n)
    {
        if (str1[index] != str2[index])
            return (str1[index] - str2[index]);
        index++;
    }
    return (0);
}

