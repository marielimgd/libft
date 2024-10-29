/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:40:41 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/29 18:55:27 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	size_t	str_i;
	size_t	sub_i;

	str_i = 0;
	if (sub[0] == '\0')
		return ((char *)str);
	while (str[str_i] != '\0' && str_i < len)
	{
		sub_i = 0;
		while (str[str_i + sub_i] == sub[sub_i] && str[str_i + sub_i] != '\0'
			&& (str_i + sub_i) < len)
		{
			sub_i++;
			if (sub[sub_i] == '\0')
				return ((char *)str + str_i);
		}
		str_i++;
	}
	return (NULL);
}
