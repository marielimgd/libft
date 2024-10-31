/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:36:42 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/31 20:37:32 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "minunit.h"
#include "libft.h"  // Include your library with ft_itoa function

int g_tests_run = 0;

static char *test_positive_number() {
    char *result = ft_itoa(12345);
    MU_ASSERT("error, ft_itoa(12345) != '12345'", strcmp(result, "12345") == 0);
    free(result);
    return 0;
}

static char *test_negative_number() {
    char *result = ft_itoa(-12345);
    MU_ASSERT("error, ft_itoa(-12345) != '-12345'", strcmp(result, "-12345") == 0);
    free(result);
    return 0;
}

static char *test_zero() {
    char *result = ft_itoa(0);
    MU_ASSERT("error, ft_itoa(0) != '0'", strcmp(result, "0") == 0);
    free(result);
    return 0;
}

static char *test_int_min() {
    char *result = ft_itoa(INT_MIN);
    MU_ASSERT("error, ft_itoa(INT_MIN) != '-2147483648'", strcmp(result, "-2147483648") == 0);
    free(result);
    return 0;
}

static char *test_int_max() {
    char *result = ft_itoa(INT_MAX);
    MU_ASSERT("error, ft_itoa(INT_MAX) != '2147483647'", strcmp(result, "2147483647") == 0);
    free(result);
    return 0;
}

static char *all_tests() {
    MU_RUN_TEST(test_positive_number);
    MU_RUN_TEST(test_negative_number);
    MU_RUN_TEST(test_zero);
    MU_RUN_TEST(test_int_min);
    MU_RUN_TEST(test_int_max);
    return 0;
}

int main() {
    char *result = all_tests();
    if (result != 0) {
        printf("%s\n", result);
    } else {
        printf("ALL TESTS PASSED\n");
    }
    printf("Tests run: %d\n", g_tests_run);
    return result != 0;
}
