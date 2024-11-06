/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:40:41 by marielidias       #+#    #+#             */
/*   Updated: 2024/11/06 12:00:37 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *str, const char *sub, size_t len)
{
    size_t index = 0;
    size_t sub_len;

    if (*sub == '\0')
        return ((char *)str);
    sub_len = 0;
    while (sub[sub_len] != '\0')  
        sub_len++;
    while (str[index] != '\0' && index + sub_len <= len)
    {
        if (str[index] == sub[0] && memcmp(str + index, sub, sub_len) == 0)
            return ((char *)(str + index));
		index++;
    }
    return (NULL);
}
