/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:02:38 by mmariano          #+#    #+#             */
/*   Updated: 2024/09/05 09:21:28 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	extrachar(char *str, int *ptr)
{
	int	count;
	int	index;

	index = 0;
	count = 1;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	while ((str[index] != '\0') && (str[index] == 43 || str[index] == 45))
	{
		if (str[index] == 45)
			count *= -1;
		index++;
	}
	*ptr = index;
	return (count);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	index;

	result = 0;
	index = 0;
	sign = extrachar(str, &index);
	while ((str[index] != '\0') && str[index] >= 48 && str[index] <= 57)
	{
		result *= 10;
		result += str[index] - 48;
		index++;
	}
	result *= sign;
	return (result);
}

/* int	main(void)
{
	char	*s = " ---+--+1234ab567";
	
	printf("%d", ft_atoi(s));
}
 */