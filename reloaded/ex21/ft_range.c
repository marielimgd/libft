/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:10:50 by mmariano          #+#    #+#             */
/*   Updated: 2024/10/10 12:32:45 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	*ft_range(int min, int max)
{
	int	index;
	int	*size;

	index = 0;
	size = (int *)malloc(sizeof(*size) * (max - min));
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		size[index] = min;
		index++;
		min++;
	}
	return (size);
}
