/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:35:33 by mmariano          #+#    #+#             */
/*   Updated: 2024/10/29 19:09:19 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "minunit.h"
#include "../libft.h"

int g_tests_run = 0;

int ft_strlen(char *str);

static char *test_empty_string()
{
    MU_ASSERT("Error: empty string length should be 0", ft_strlen("") == 0);
    return 0;
}

static char *test_regular_string()
{
    MU_ASSERT("Error: string 'hello' length should be 5", ft_strlen("hello") == 5);
    return 0;
}

static char *test_string_with_spaces()
{
    MU_ASSERT("Error: string 'hello world' length should be 11", ft_strlen("hello world") == 11);
    return 0;
}

static char *test_special_characters()
{
    MU_ASSERT("Error: string 'hi!@#' length should be 5", ft_strlen("hi!@#") == 5);
    return 0;
}

/* Main test runner */
static char *all_tests()
{
    MU_RUN_TEST(test_empty_string);
    MU_RUN_TEST(test_regular_string);
    MU_RUN_TEST(test_string_with_spaces);
    MU_RUN_TEST(test_special_characters);
    return 0;
}

int main(void)
{
    char *result = all_tests();
    if (result != 0)
    {
        printf("%s\n", result);
    }
    else
    {
        printf("ALL TESTS PASSED\n");
    }
    printf("Total tests run: %d\n", g_tests_run);

    return result != 0;
}
