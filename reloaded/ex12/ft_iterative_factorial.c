/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:15:45 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/17 10:12:05 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int res;
    int index;

    res = 1;
    index = 1;    
    if (nb < 0 || nb > 12) //lida com mnumeros negativos e integer overflow para 32 bits (13! ja daria ruim)
        return(0);
    if (nb == 0 || nb == 1)
        return(res); //res é 1 nesse caso
    while (index <= nb)
    {
        res = index * res; // poderia ser res *= index
        index++;
    }
    return (res);        
}

#include <stdio.h>

int main(void)
{
    int number;
    int num;

    number = 6;
    num = ft_iterative_factorial(number);
    printf("o fatorial de 6 é %d\n", num);
    return (0);
}