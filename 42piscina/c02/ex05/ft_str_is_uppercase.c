/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:46:37 by mmariano          #+#    #+#             */
/*   Updated: 2024/09/01 16:29:29 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 65 || *str > 90)
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char str[] = "ANDPREJ";
// 	int output = ft_str_is_uppercase(str);
// 	char final = output + '0';

// 	write(1, &final, 1);
// 	return (0);
// }