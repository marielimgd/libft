/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:50:48 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/16 17:01:03 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char m)
{
    write(1, &m, 1);
}

void    ft_print_number(void)
{
    int num;

    num = '0';
    while (num <= '9')
    {
        ft_putchar(num);
        num++;
    }
}

int main(void)
{
    ft_print_number();
}