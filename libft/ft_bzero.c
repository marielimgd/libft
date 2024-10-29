/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:02:40 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/29 13:30:34 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n) 
{
    unsigned char *tmp;
    
    tmp = (unsigned char *) s;
    while (n > 0)
    {
        *(tmp++) = 0;
        n--;
    }   
}