/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:21:02 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/30 11:29:30 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t index;
	size_t str_len;
    char   *str;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len) //pode ser so igual
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
    str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
    index = 0;
	while (index < len)
	{
		str[index] = s[start + index];
		index++;
	}
	return (str);
}