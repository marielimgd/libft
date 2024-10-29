/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:42:10 by mmariano          #+#    #+#             */
/*   Updated: 2024/10/29 11:11:28 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t  ft_strlen(const char *s);
{
    size_t len;

    len = 0;
    while(str[len] != '\0')
        len++;
    return (len);  
}
