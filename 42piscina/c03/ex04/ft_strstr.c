/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:14:16 by mmariano          #+#    #+#             */
/*   Updated: 2024/09/03 16:54:28 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	index;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			index = 0;
			while (str[index] == to_find[index] && str[index] != '\0'
				&& to_find[index] != '\0')
				index++;
			if (to_find[index] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}

/* int	main(int argc, char **argv)
{
	if (argc != 3) 
	{
    printf("Usage: %s <string> <substring>\n", argv[0]);
    return 1;
	}
		
    char *result = ft_strstr(argv[1], argv[2]);
    if (result) 
	{
        printf("Found substring: %s\n", result);
    } else 
	{
        printf("Substring not found.\n");
    }

    return 0;
} */

/* int	main(void)
{
	char	str[] = "Bom dia";
	char	str2[] = "Bom";
	char	*result = ft_strstr(str, str2);
	
	printf("String: %s\n", str);
	printf("Substring: %s\n", result);
} */