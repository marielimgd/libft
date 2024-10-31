/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:42:04 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/31 19:08:45 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	substr_count(const char *s, char c)
{
	int	count;
	int	substr;

	count = 0;
	substr = 0;
	while (*s)
	{
		if (*s != c && !substr)
		{
			substr = 1;
			count++;
		}
		else if (*s == c)
			substr = 0;
		s++;
	}
	return (count);
}

static char	*chop_substr(const char *s, int len)
{
	char	*substr;

	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s, len + 1);
	return (substr);
}

static void	free_str(char **strs, int index)
{
	while (index--)
		free(strs[index]);
	free(strs);
}

static char	**write_substr(char **res_list, const char *s, char c)
{
	int	index;
	int	start;

	index = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		start = 0;
		while (s[start] && s[start] != c)
			start++;
		if (start > 0)
		{
			res_list[index] = chop_substr(s, start);
			if (!res_list[index])
			{
				free_str(res_list, index);
				return (NULL);
			}
			index++;
			s += start; // Move pointer forward
		}
	}
	res_list[index] = NULL; // Null-terminate the array
	return (res_list);
}

char	**ft_split(char const *s, char c)
{
	char	**res_list;

	if (!s)
		return (NULL);
	res_list = ft_calloc((substr_count(s, c) + 1), sizeof(char *));
	if (!res_list)
		return (NULL);
	res_list = write_substr(res_list, s, c);
	return (res_list); // Return the result list
}

// int	main(void)
// {
// 	char	*str;
// 	char	delimiter;
// 	char	**result;

// 	str = " ";
// 	delimiter = ' ';
// 	result = ft_split(str, delimiter);
// 	if (!result)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	for (int i = 0; result[i] != NULL; i++)
// 	{
// 		printf("Word %d: %s\n", i + 1, result[i]);
// 		free(result[i]);
// 	}
// 	free(result);
// 	return (0);
// }
