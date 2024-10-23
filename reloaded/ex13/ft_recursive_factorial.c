/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:57:41 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/17 11:23:10 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{   
    if (nb < 0)
        return (1);
    if (nb == 0 || nb == 1)
        return(1);
    else
        return (nb * ft_recursive_factorial(nb-1));
}

#include <stdio.h>

int main(void)
{
    int res;
    
    res = ft_recursive_factorial(5);
    printf("O fatorial de 5 é %d\n", res); 
}