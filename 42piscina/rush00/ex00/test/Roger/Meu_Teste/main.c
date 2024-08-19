/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:47:33 by rreal-de          #+#    #+#             */
/*   Updated: 2024/08/17 20:48:47 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	rush(int x, int y);

int	main( int argc, char **argv)
{
	char	*entra_valor;
	char	*endpoint;
	int		valor_x;
	int		valor_y;

	(void)argc;
	entra_valor = argv[1];
	endpoint = NULL;
	valor_x = strtol(entra_valor, &endpoint, 10);
	if (valor_x < 0)
	{
		write (1, "\n", 1);
		fprintf(stderr, "Os valores nao podem ");
		fprintf(stderr, "ser negativos e deve ter a mascara -> ");
		fprintf(stderr, "0 , 0");
		write (1, "\n", 1);
		write (1, "\n", 1);
		return (0);
	}
	entra_valor = argv[3];
	endpoint = NULL;
	valor_y = strtol(entra_valor, &endpoint, 10);
	rush (valor_x, valor_y);
}
