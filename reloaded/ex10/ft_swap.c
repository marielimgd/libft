/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:28:19 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/16 18:49:50 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
#include <stdio.h>

int main(void)
{
    int x;
    int y;

    x = 2;
    y = 40;
    
    printf("Before swap x=%d, y=%d\n", x, y);
    ft_swap(&x, &y);
    printf("After swap x=%d, y=%d\n", x, y);
    
}