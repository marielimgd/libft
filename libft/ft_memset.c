/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:46:34 by mmariano          #+#    #+#             */
/*   Updated: 2024/10/25 17:43:43 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h> // colocar no libft.h depois

void *ft_memset(void *b, int c, size_t len)
{
    size_t i = 0;
    unsigned char *ptr = (unsigned char *)b;
    
    while (i < len)
        ptr[i++] = (unsigned char)c;
    return (b);
}
