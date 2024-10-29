/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:24:12 by mmariano          #+#    #+#             */
/*   Updated: 2024/08/23 08:07:45 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// 
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
//
// int	main(void)
// {
// 	int a = 42;
// 	int b = 1;
// 	int *tmp = &a; tirar essa linha, se não não compila!!

// 	printf("Before swap: a = %d, b = %d\n", a, b);
// 	ft_swap(&a,&b);
// 	printf("After swap: a = %d, b = %d\n", a, b);
// 	return 0;
// }
