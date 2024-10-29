/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:55:25 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/29 18:55:30 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	index;

	index = ft_strlen(str);
	while (index > 0)
	{
		if (str[index - 1] == (char)c)
			return ((char *)&str[index - 1]);
		index--;
	}
	return (NULL);
}

// int main()
// {
//     const char *str = "Hello, World!";
//     char *result = ft_strrchr(str, 'l');

//     if (result)
//         printf("Found: %s\n", result);
//     else
//         printf("Char not found.\n");

//     return (0);
// }