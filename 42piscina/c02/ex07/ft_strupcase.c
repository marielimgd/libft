/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:04:12 by mmariano          #+#    #+#             */
/*   Updated: 2024/09/01 16:33:56 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*holder;

	holder = str;
	while (*str != '\0')
	{
		if (*str > 96 && *str < 123)
		{
			*str = *str - 32;
		}
		str++;
	}
	return (holder);
}

// int	main(void)
// {
// 	char text[7] = "marieli";
// 	char *final;

// 	final = ft_strupcase(text);
// 	write(1, final, 7);
// }