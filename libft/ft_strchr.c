/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:59:52 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/29 18:55:04 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == (char)c)
			return ((char *)&str[index]);
		index++;
	}
	return (NULL);
}

// int main()
// {
//     const char *str = "Hello, World!";
//     char *result = ft_strchr(str, 'l');

//     if (result)
//         printf("Found: %s\n", result);
//     else
//         printf("Char not found.\n");

//     return (0);
// }