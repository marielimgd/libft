/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:54:55 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/16 19:12:29 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_div_mod(int a, int b, int *div, int *mod)
{
        *div = a / b;
        *mod = a % b;
}

#include <stdio.h>

int main   (void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 42;
    b = 4;
    
    ft_div_mod(a, b, &div, &mod);
    
    printf("a=%d, b=%d, div=%d, mod=%d\n", a, b, div, mod);
    return (0);
}