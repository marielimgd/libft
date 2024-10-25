/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:42:48 by mmariano          #+#    #+#             */
/*   Updated: 2024/08/22 11:20:21 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
//
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void) {
// 	int a = 42;

//	int b = 10;
//	int div;
//	int mod;

//	ft_div_mod(a, b, &div, &mod);

//	printf("a = %d, b = %d\n", a, b);
//	printf("Div result: %d\n", div);
//	printf("Mod result: %d\n", mod);

//	return 0;
// }
