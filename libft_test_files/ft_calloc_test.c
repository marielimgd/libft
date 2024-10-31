/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:44:14 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/29 19:08:53 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "minunit.h"
#include "../libft.h"

// Declaração da função que será testada
void *ft_calloc(size_t count, size_t size);

int g_tests_run = 0;

// Testa a alocação com zero elementos
static char *test_zero_elements()
{
    void *ptr = ft_calloc(0, sizeof(int));
    MU_ASSERT("Error: expected ptr to be NULL", ptr == NULL); // Esperado: NULL
    return 0;
}

// Testa a alocação de tamanho zero
static char *test_zero_size()
{
    void *ptr = ft_calloc(5, 0);
    MU_ASSERT("Error: expected ptr to be NULL", ptr == NULL); // Esperado: NULL
    return 0;
}

// Testa a alocação normal
static char *test_normal_allocation()
{
    size_t count = 5;
    size_t size = sizeof(int);
    int *ptr = (int *)ft_calloc(count, size);
    MU_ASSERT("Error: expected ptr not to be NULL", ptr != NULL);
    
    // Verifica se a memória foi inicializada com zero
    for (size_t i = 0; i < count; i++)
        MU_ASSERT("Error: expected 0", ptr[i] == 0);

    free(ptr); // Libera a memória
    return 0;
}

// Testa a alocação com limites máximos
static char *test_large_allocation()
{
    size_t count = (size_t)-1; // Valor máximo para size_t
    size_t size = sizeof(int);
    void *ptr = ft_calloc(count, size);
    
    // Verifica se ptr é NULL devido à alocação inválida
    MU_ASSERT("Error: expected ptr to be NULL", ptr == NULL);
    return 0;
}

// Função que executa todos os testes
static char *all_tests()
{
    MU_RUN_TEST(test_zero_elements);
    MU_RUN_TEST(test_zero_size);
    MU_RUN_TEST(test_normal_allocation);
    MU_RUN_TEST(test_large_allocation);
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
