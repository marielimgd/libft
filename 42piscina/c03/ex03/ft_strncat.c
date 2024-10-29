/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:26:07 by mmariano          #+#    #+#             */
/*   Updated: 2024/09/03 15:49:23 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*holder;
	unsigned int	index;

	holder = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	index = 0;
	while (index < nb && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		index++;
	}
	*dest = '\0';
	return (holder);
}

/* int	main(void)
{
	char	str1[50] = "Hello, ";
	char	str2[20] = "World";
	int		nb;

	nb = 2;
	printf("%s\n", ft_strncat(str1, str2, nb));
	return (0);
} */
