/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:02:47 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/29 18:55:24 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t index;

	index = 0;
	if (n == 0)
		return (0);

	while ((index < n) && (str1[index] && str2[index])
		&& (str1[index] == str2[index]))
	{
		str1++;
		str2++;
		index++;
	}
	if (index == n)
		return (0);
	return ((unsigned char)str1[index] - (unsigned char)str2[index]);
}