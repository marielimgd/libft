/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:47:33 by rreal-de          #+#    #+#             */
/*   Updated: 2024/08/17 18:36:05 by mmariano         ###   ########.fr       */
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
	entra_valor = argv[3];
	endpoint = NULL;
	valor_y = strtol(entra_valor, &endpoint, 10);
	rush (valor_x, valor_y);
}
