/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:39:02 by mmariano          #+#    #+#             */
/*   Updated: 2024/09/03 10:50:45 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/* int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "World";
	char	str3[] = "Hel";
	int	result = ft_strcmp(str1, str3);
	
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
}
 */