/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:41:48 by mmariano          #+#    #+#             */
/*   Updated: 2024/09/02 17:19:39 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
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

int	new_word(char *str)
{
	if ((*str >= 65 && *str <= 90) || (*str >= '0' && *str <= '9'))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int		newword;
	char	*holder;

	newword = 1;
	holder = str;
	ft_strlowcase(str);
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			if (newword)
			{
				*str -= 32;
				newword = 0;
			}
		}
		else
			newword = new_word(str);
		str++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[79] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char	*final;

	final = ft_strcapitalize(str);
	write(1, str, final - str);
	return (0);
} */