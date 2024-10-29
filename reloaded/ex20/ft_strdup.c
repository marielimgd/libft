/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:41:18 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/18 16:36:07 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_len(char *str)
{
    int len;
    
    len = 0;
    while(len[str])
        len++;
    return (len);
}

char *ft_strdup(char *src)
{
    char *dest;
    int index;
    int len;

    len = (ft_len(src) + 1);
    dest = (char *)malloc(len);
    index = 0;
    if (src == NULL)
        return (NULL);
    while(src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return(dest);
}

#include <stdio.h>

int main(void)
{
    char *texto;
       
    texto = "oioii";    
    int res = ft_len(texto);
    char *test = ft_strdup(texto);
    
    printf("len de texto é %d\n", res);
    printf("A string original é %s: \n", texto); 
    printf("A nova string é %s: ", test);   
    
}