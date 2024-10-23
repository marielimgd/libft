/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:22:03 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/18 12:26:19 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char m)
{
    write (1, &m, 1);
}

int     ft_strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2); // Retorna a diferença entre os caracteres
}

void    ft_swap(char **a, char **b) //os dois asteriscos permitem que os argumentos sejam trocados, ao invés de cada caractere
{
    char *tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

void    ft_print_params(int argc, char **argv)
{
    int input;
    char *arg;
    
    input = 1;
    while (input < argc)
    {      
        arg = argv[input];
        while (*arg)
        {
            ft_putchar(*arg);
            arg++;
        }
        ft_putchar('\n');
        input++;      
    }
}

int main(int argc, char **argv)
{
    int input; // vai ser usado para contar as iteraçoes do loop
    int counter; // para contar os argumentos
    int sorted; //pra guardar a ordem toda vez que rodar o ft_swap

    //esse é um bubble sort!
    input = 1;
    while (input < argc)
    {
        sorted = 1;
        counter = 1;
        while (counter < (argc - input)) // a cada loop, a quantidade de argumentos passados (counter) vai ser comparada com quantos elementos ainda faltam para serem ordenados (argc - input)
        {
            if (ft_strcmp(argv[counter], argv[counter + 1]) > 0)
            {
                ft_swap(&argv[counter], &argv[counter + 1]);
                sorted = 0; //volta pra zero para indicar que ainda nao está ordenado
            }
            counter++;
        }
        if (sorted) break; //se o ultimo loop nao precisar de swap, sorted = 1, o que significa que é verdadeiro, ou seja, está ordenado, por isso o loop pode ser finalizado (break)
        input++; // aumentando o input, a proxima entrada no loop so checa os elementos que ainda nao foram ordenados
    }   
    ft_print_params(argc, argv);
    return (0);
}

