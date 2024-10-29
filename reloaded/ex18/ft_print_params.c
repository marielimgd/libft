/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:24:19 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/17 16:49:02 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char m)
{
        write (1, &m, 1);
}

int main(int argc, char **argv)
{
    int input;
    int str;
    
    input = 1;
    str = 0;
    while (input < argc)
    {
        while (argv[input][str])
        {
            ft_putchar(argv[input][str]);
            str++;
        }
        ft_putchar('\n');
        input++;
        str = 0;        
    }
    return(0);
}