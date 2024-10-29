/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:07:44 by mmariano          #+#    #+#             */
/*   Updated: 2024/09/02 10:39:22 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && *src != '\0')
	{
		dest[index] = *src;
		src++;
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char    source[] = "horadoalmoço";
// 	char    copy[72];

// 	printf("source: %s\n", source);
// 	ft_strncpy(copy, source, 4);
// 	copy[4] = '\0';
// 	printf("dest: %s\n", copy);
// 	return (0);
// }
