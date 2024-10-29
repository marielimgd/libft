/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:10:01 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/29 17:15:04 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	isneg;
	int	index;

	num = 0;
	isneg = 1;
	index = 0;
	while (str[index] && (str[index] == ' ' || str[index] == '\t'
			|| str[index] == '\n' || str[index] == '\r'
			|| str[index] == '\v' || str[index] == '\f'))
		index++;
	if (str[index] == '+')
		index++;
	else if (str[index] == '-')
	{
		isneg *= -1;
		index++;
	}
	while (ft_isdigit(str[index]))
	{
		num = (num * 10) + (str[index] - '0');
		index++;
	}
	return (num * isneg);
}
