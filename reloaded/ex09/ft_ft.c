/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:08:03 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/16 17:57:41 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

#include <stdio.h>

int main(void)
{
    int a; //declaro variavel de inteiros
    int *ptr; //declaro o ponteiro para um inteiro
    
    ptr = &a; // o ponteiro aponta para a variavel a. Ao assinalar valor ao ponteiro nao usamos o *
    ft_ft(ptr); //chama a funçao com o valor do ponteiro que agora é a
    printf("%d\n", a);
}
