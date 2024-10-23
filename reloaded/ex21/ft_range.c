/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:31:28 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/18 17:19:55 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *range;
    int index;
    int len;

    len = (max - min);
    range = (int *)malloc(len * sizeof(int));
    index = 0;
    if (min >= max)
        return(NULL);
    while (min < max) // tem que printar até (max - 1)
    {
        range[index] = min;
        index++;
        min++;
    }
    return (range);
}

#include <stdio.h>

int main(void)
{
    int min = 2;
    int max = 0;
    int *range = ft_range(min, max);
    int index = 0;

    while (index < (max - min))
    {
        printf(" %d", range[index]);
            index++;
    }
    printf("\n");
}
