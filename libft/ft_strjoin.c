/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:04:21 by mmariano          #+#    #+#             */
/*   Updated: 2024/10/30 16:04:27 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	total_len;
	size_t	index;
	size_t	index_str;
	char	*new_str;

	index = 0;
	index_str = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	total_len = len_s1 + len_s1 +1;
	new_str = (char *)malloc(total_len);
	
	if (!new_str)
		return(NULL);
	while (s1[index])
		new_str[index_str++] = s1[index++];
	index = 0;
	while (s2[index])
		new_str[index_str++] = s2[index++];
	new_str[index_str] = '\0';
	return(new_str);	
}

/* int main(void)
{
	char *s1 = "testando ";
	char *s2 = "difflen";
	char *result;
	
	result =  ft_strjoin(s1, s2);
	printf("result = %s", result);
} */