/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:37:40 by mmariano          #+#    #+#             */
/*   Updated: 2024/09/03 15:48:43 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	{
		while (index < n && (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
			index++;
		}
		if (index == n)
			return (0);
		return (*s1 - *s2);
	}
}
/*
int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "World";
	char	str3[] = "Hel";
	int		n = 6;
	int		result = ft_strncmp(str1, str2, n);

	if (result < 0)
	{
		write(1, "-1\n", 3);
	}
	else if (result == 0)
	{
		write(1, "0\n", 2);
	}
	else
	{
		write(1, "1\n", 2);
	}
	return (0);
} */
