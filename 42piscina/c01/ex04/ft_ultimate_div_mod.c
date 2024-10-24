/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:39:15 by mmariano          #+#    #+#             */
/*   Updated: 2024/08/22 12:24:12 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	store_div;
	int	store_mod;

	store_div = *a / *b;
	store_mod = *a % *b;
	*a = store_div;
	*b = store_mod;
}

// int main() {
//     int a = 42;
//     int b = 10;
//	   printf("a = %d\n b = %d\n", a, b);

//     ft_ultimate_div_mod(&a, &b);

//     printf("division: %d\n", a); 
//     printf("modulus: %d\n", b);

//     return 0;
// }
