/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:49:29 by mmariano          #+#    #+#             */
/*   Updated: 2024/09/02 10:50:04 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*holder;

	holder = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (holder);
}

// int	main(void)
// {
// 	char	source[] = "horadoalmoço";
// 	char	copy[12];

// 	printf("source: %s\n", source);
// 	ft_strcpy(copy, source);
// 	printf("dest: %s\n", copy);
// 	return (0);
// }
