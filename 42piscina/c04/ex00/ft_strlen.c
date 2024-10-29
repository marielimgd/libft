/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:18:26 by mmariano          #+#    #+#             */
/*   Updated: 2024/09/05 09:06:37 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/* int main (void)
{
	char	text[] = "Norminette me ajuda";
	int length = ft_strlen(text);

	printf("The text has %d chars", length);
	return (0);
}
 */