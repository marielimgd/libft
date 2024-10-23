/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:54:36 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/17 13:53:57 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
    int res;
    if (nb < 0)
        return (-1);
        
    res = 0;
    while (res * res < nb)
        res++;
    if (res * res == nb) // se for um quadrado perfeito
        return (res);
    else
        return(0); // se nao for um quadrado perfeito é um numero improprio
}
#include <stdio.h>

int main(void)
{
    int nb;

    nb = ft_sqrt(9);
    printf("A raiz quadrada de 9 é %d\n", nb);
}