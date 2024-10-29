/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:35:32 by mmariano          #+#    #+#             */
/*   Updated: 2024/09/01 16:22:42 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 48)
			return (0);
		if (*str > 57)
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "4226";
// 	int		output;
// 	char	final;

// 	output = ft_str_is_numeric(str);
// 	final = output + '0';
// 	write(1, &final, 1);
// 	return (0);
// }
