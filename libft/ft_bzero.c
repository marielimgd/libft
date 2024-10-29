/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:02:40 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/29 18:52:01 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t len)
{
	unsigned char *ptr;
	size_t index;

	ptr = (unsigned char *)s;
	index = 0;
	while (index < len)
	{
		ptr[index] = 0;
		index++;
	}
	return (s);
}