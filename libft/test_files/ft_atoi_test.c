/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:13:30 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/29 17:14:59 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "libft.h" // Inclua o cabeçalho onde ft_atoi está definido
#include "minunit.h"

int g_tests_run = 0;

// Testa a conversão de uma string vazia
static char *test_empty_string()
{
    MU_ASSERT("Error: expected 0", ft_atoi("") == 0);
    return 0;
}

// Testa a conversão de espaços em branco
static char *test_whitespace()
{
    MU_ASSERT("Error: expected 42", ft_atoi("   42") == 42);
    MU_ASSERT("Error: expected -42", ft_atoi("   -42") == -42);
    return 0;
}

// Testa a conversão de números positivos e negativos
static char *test_positive_negative_numbers()
{
    MU_ASSERT("Error: expected 123", ft_atoi("123") == 123);
    MU_ASSERT("Error: expected -123", ft_atoi("-123") == -123);
    MU_ASSERT("Error: expected 0", ft_atoi("0") == 0);
    return 0;
}

// Testa a conversão de caracteres não numéricos após o número
static char *test_non_numeric_characters()
{
    MU_ASSERT("Error: expected 42", ft_atoi("42abc") == 42);
    MU_ASSERT("Error: expected -42", ft_atoi("-42abc") == -42);
    MU_ASSERT("Error: expected 0", ft_atoi("0abc") == 0);
    return 0;
}

// Testa a conversão com limites (assumindo INT_MAX e INT_MIN)
static char *test_limits()
{
    MU_ASSERT("Error: expected 2147483647", ft_atoi("2147483647") == INT_MAX);
    MU_ASSERT("Error: expected -2147483648", ft_atoi("-2147483648") == INT_MIN);
    return 0;
}

// Testa a conversão de números com sinais
static char *test_signs()
{
    MU_ASSERT("Error: expected 42", ft_atoi("+42") == 42);
    MU_ASSERT("Error: expected -42", ft_atoi("-42") == -42);
    return 0;
}

// Função que executa todos os testes
static char *all_tests()
{
    MU_RUN_TEST(test_empty_string);
    MU_RUN_TEST(test_whitespace);
    MU_RUN_TEST(test_positive_negative_numbers);
    MU_RUN_TEST(test_non_numeric_characters);
    MU_RUN_TEST(test_limits);
    MU_RUN_TEST(test_signs);
    return 0;
}

// Função principal para executar os testes
int main(void)
{
    char *result = all_tests();
    if (result != 0)
        printf("Test failed: %s\n", result);
    else
        printf("All tests passed!\n");

    printf("Tests run: %d\n", g_tests_run);
    return result != 0; // Retorna 1 se falhar, 0 se passar
}
