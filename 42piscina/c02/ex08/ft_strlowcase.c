/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:21:50 by mmariano          #+#    #+#             */
/*   Updated: 2024/09/01 16:35:05 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*holder;

	holder = str;
	while (*str != '\0')
	{
		if (*str > 64 && *str < 91)
		{
			*str = *str + 32;
		}
		str++;
	}
	return (holder);
}

// int	main(void)
// {
// 	char text[7] = "MARIELI";
// 	char *final = ft_strlowcase(text);

// 	write(1, final, 7);
// }