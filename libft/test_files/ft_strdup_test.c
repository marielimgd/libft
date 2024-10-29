/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdup_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:28:17 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/29 18:28:40 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "minunit.h"

// Declaração da função que será testada
char *ft_strdup(const char *src);
int g_tests_run = 0;

// Testa a função ft_strdup com string normal
static char *test_ft_strdup_normal()
{
    const char *original = "Hello, World!";
    char *duplicate = ft_strdup(original);

    MU_ASSERT("Error: expected duplicate to be non-NULL", duplicate != NULL);
    MU_ASSERT("Error: expected strings to be equal", strcmp(original, duplicate) == 0);
    
    // Verifica se a nova string é uma cópia e não altera a original
    free(duplicate);
    return 0;
}

// Testa a função ft_strdup com string vazia
static char *test_ft_strdup_empty()
{
    const char *original = "";
    char *duplicate = ft_strdup(original);

    MU_ASSERT("Error: expected duplicate to be non-NULL", duplicate != NULL);
    MU_ASSERT("Error: expected duplicate to be an empty string", duplicate[0] == '\0');

    free(duplicate);
    return 0;
}

// Testa a função ft_strdup com string nula
static char *test_ft_strdup_null()
{
    char *duplicate = ft_strdup(NULL);
    MU_ASSERT("Error: expected duplicate to be NULL", duplicate == NULL);
    return 0;
}

// Função que executa todos os testes
static char *all_tests()
{
    MU_RUN_TEST(test_ft_strdup_normal);
    MU_RUN_TEST(test_ft_strdup_empty);
    MU_RUN_TEST(test_ft_strdup_null);
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
