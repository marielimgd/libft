/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:40:33 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/16 17:01:15 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char m)
{
        write (1, &m, 1);
}

void    ft_print_alphabet(void)
{
    char letra;

    letra = 'a';
    while (letra <= 'z')
    {
        ft_putchar(letra);
        letra++;
    }
}

int main(void)
{
    ft_print_alphabet();
}