/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:05:42 by mmariano          #+#    #+#             */
/*   Updated: 2024/10/30 17:19:34 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(const char *s1, const char *set)
{
	size_t start;
	size_t end;
	size_t size;
	char *new_str;

	if (!s1 || !set)
		return(NULL);
	
	start = 0;
	end = ft_strlen(s1) - 1;
	
	while (start < end && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;	
	size = end - start + 2;
	new_str = malloc(size);	
	if (!new_str)
		return(NULL);
	
	ft_strlcpy(new_str, &s1[start], size);
	return (new_str);
}

int main(void)
{
	char *s1 = "ababaaaMy name is Simonbbaaabbad";
	char set[] = "ab";
	char *result;

	result = ft_strtrim(s1, set);
	printf("Resultado: '%s'\n", result);
	free(result);
	return 0;
}