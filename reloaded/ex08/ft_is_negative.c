/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:02:02 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/16 17:07:18 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char m)
{
    write (1, &m, 2);
}

void   ft_is_negative(int n)
{
    if (n > 0)
        ft_putchar('P');
    if (n < 0)
        ft_putchar('N');
}

int main(void)
{
    ft_is_negative(3);
}