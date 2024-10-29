/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:30:11 by mmariano          #+#    #+#             */
/*   Updated: 2024/09/02 11:06:46 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 97 || *str > 122)
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char str[] = "kpoua";
// 	int output = ft_str_is_lowercase(str);
// 	char final = output + '0';

// 	write(1, &final, 1);
// }