/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:30:49 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/17 15:58:35 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
while ((*s1 != '\0') && (*s1 == *s2))
{
    s1++;
    s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}


#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s1 = "oiee";
    char *s2 = "oii";
    
    const char *s3 = "oiee";
    const char *s4 = "oii";
    
    int nat = strcmp(s3, s4);
    int res = ft_strcmp(s1,s2);
    printf("ft_strcmp é %d\n", res);
    printf("strcmp é %d\n", nat);
}