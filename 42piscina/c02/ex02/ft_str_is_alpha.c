/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_str_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:44:44 by mmariano          #+#    #+#             */
/*   Updated: 2024/09/02 11:00:47 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 65)
		{
			return (0);
		}
		if (*str > 90 && *str < 97)
		{
			return (0);
		}
		if (*str > 122)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "hfng";

// 	printf("%s\n", str);
// 	printf("%i", ft_str_is_alpha(str));
// 	return (0);
// }