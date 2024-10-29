/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:35:46 by mmariano          #+#    #+#             */
/*   Updated: 2024/09/03 15:49:04 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*holder;

	holder = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (holder);
}

/* int	main(void)
{
	char	str1[50] = "Hello, ";
	char	str2[20] = "World";

	printf("%s\n", ft_strcat(str1, str2));
	return (0);
} */
