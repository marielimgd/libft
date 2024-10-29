/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:19:02 by mmariano          #+#    #+#             */
/*   Updated: 2024/09/05 10:43:06 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

/* #include <stdio.h> 
int	main(void)
{
	char	message[] = "Norminette me ajuda";

	ft_putstr(message);
	printf("\n");
	return (0);
}
 */