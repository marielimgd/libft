/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:08:02 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/29 13:31:17 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr_src;
	char	*ptr_dst;
	size_t	index;
	
    if (!dst && !src)
        return (NULL);

	ptr_src = (char *)src;
	ptr_dst = (char *)dst;
	index = 0;
	if (ptr_dst > ptr_src)
		while (len-- > 0)
			ptr_dst[len] = ptr_src[len];
	else
		while (index < len)
		{
			ptr_dst[index] = ptr_src[index];
			index++;
		}
	return (dst);
}