/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:23:42 by mmariano          #+#    #+#             */
/*   Updated: 2024/10/30 17:50:28 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//count words
size_t	count_words(char const *s, char c)
{
	size_t words = 0;
	bool letter = 0;
	while (*s)
	{
		letter = false;
		while (*s == c && *s)
		++s;
		while (*s != c && c)
		{
			if(!letter)
			{
				++words;
				letter = true;
			}
			++s;
		}
	}
	return (words);
}
//allocat memory
//copy the words separatedely

char **ft_split(char const *s, char c);
{
	
}