/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:02:40 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/25 17:06:57 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void ft_bzero(void *s, size_t n) 
{
    unsigned char *ptr = (unsigned char *)s;
    while (n > 0) 
    {
        *ptr = 0;
        ptr++;
        n--;
    }
}