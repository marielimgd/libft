/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:24:41 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/29 18:22:17 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *ptr;
    size_t total_size;

    if (count == 0 || size == 0)
        return NULL;
    if (count > 0 && size > 0 && count > (size_t)(-1) / size)
        return NULL;

    total_size = count * size;

    ptr = (unsigned char *)malloc(total_size);
    if (!ptr)
        return NULL;
    ft_bzero(ptr, total_size);

    return (ptr);
}
