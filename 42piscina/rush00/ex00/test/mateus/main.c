/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalaibb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 02:39:16 by msalaibb          #+#    #+#             */
/*   Updated: 2024/08/18 09:38:59 by msalaibb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	rush(int x, int y, int rushIndex);

int	main(int argc, char **argv)
{
	char	*e[3];
	int		x;
	int		y;
	int		r;

	if (argc == 4)
	{
		x = strtol(argv[1], &e[0], 10);
		
		y = strtol(argv[2], &e[1], 10);
		r = strtol(argv[3], &e[2], 10);
		(void)argc;
		rush(x, y, r);
		return (0);
	}
	if (x < 1 || y < 1 || r > 4 || r < 0 || *e[0] != '\0' || *e[1] != '\0' || *e[2] != '\0')
	{
		write(1, "Escreva uma Opcao valida. Ex: 5 5 0", 35);
		return (1);
	}
	write(1, "Escreva uma Opcao valida. Ex: 5 5 0", 35);
	return (1);
}
