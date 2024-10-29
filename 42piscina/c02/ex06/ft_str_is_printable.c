/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:53:45 by mmariano          #+#    #+#             */
/*   Updated: 2024/09/01 16:32:49 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 32)
			return (0);
		if (*str == 127)
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char str[] = "@lm";
// 	int output = ft_str_is_printable(str);
// 	char final = output + '0';

// 	write(1, &final, 1);
// 	return (0);
// }