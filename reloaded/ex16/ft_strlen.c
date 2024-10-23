/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:21:26 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/17 15:25:36 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while(str[len] != '\0')
        len++;
    return (len);  
}
#include <stdio.h>

int main(void)
{
    char *text;
    
    text = "isso é uma frase";
    ft_strlen(text);
    printf("o len é %d\n", ft_strlen(text));
}