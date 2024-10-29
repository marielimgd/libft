/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:49:37 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/29 11:27:44 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t src_len;
    
    src_len = ft_strlen(src);
    if (src_len + 1 < dstsize)
    {
        ft_memcpy(dst, src, src_len +1);
    }
    else if (dstsize != 0)
    {
        ft_memcpy(dst, src, dstsize -1);
        dst[dstsize - 1] = 0;
    }
    return (src_len);
    
}