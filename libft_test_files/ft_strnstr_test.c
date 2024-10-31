/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:05:04 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/29 19:08:24 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"

int g_tests_run = 0;

static char *test_empty_substring()
{
    char *str = "Hello, World!";
    char *sub = "";
    MU_ASSERT("Error: expected str", ft_strnstr(str, sub, 20) == str);
    return 0;
}

static char *test_len_smaller_than_str()
{
    char *str = "Hello, World!";
    char *sub = "World";
    MU_ASSERT("Error: expected NULL", ft_strnstr(str, sub, 5) == NULL); // "Hello" é o máximo
    return 0;
}

static char *test_substring_at_start()
{
    char *str = "Hello, World!";
    char *sub = "Hello";
    MU_ASSERT("Error: expected str", ft_strnstr(str, sub, 20) == str);
    return 0;
}

static char *test_substring_in_middle()
{
    char *str = "Hello, World!";
    char *sub = "lo, W";
    MU_ASSERT("Error: expected correct substring", ft_strnstr(str, sub, 20) == &str[3]);
    return 0;
}

static char *test_substring_at_end()
{
    char *str = "Hello, World!";
    char *sub = "World!";
    MU_ASSERT("Error: expected correct substring", ft_strnstr(str, sub, 20) == &str[7]);
    return 0;
}

static char *test_substring_not_found()
{
    char *str = "Hello, World!";
    char *sub = "Goodbye";
    MU_ASSERT("Error: expected NULL", ft_strnstr(str, sub, 20) == NULL);
    return 0;
}

static char *all_tests()
{
    MU_RUN_TEST(test_empty_substring);
    MU_RUN_TEST(test_len_smaller_than_str);
    MU_RUN_TEST(test_substring_at_start);
    MU_RUN_TEST(test_substring_in_middle);
    MU_RUN_TEST(test_substring_at_end);
    MU_RUN_TEST(test_substring_not_found);
    return 0;
}

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
