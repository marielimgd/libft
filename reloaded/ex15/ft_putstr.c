/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:55:46 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/17 14:26:38 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char m)
{
    write (1, &m, 1);
}

void    ft_putstr(char *str)
{
    int index;
    
    index = 0;
    while(str[index] != '\0')
    {
        ft_putchar(str[index]);
        index++;
    }
}

int main(void)
{
    char *text;
    
    text = "isso é uma frase";
    ft_putstr(text);
}
