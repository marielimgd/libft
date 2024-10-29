/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:39:27 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/25 17:39:33 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "minunit.h"

int g_tests_run = 0;

void ft_bzero(void *s, size_t n);

// Test for full zeroing of a buffer
static char *test_full_zero() {
    char buffer[10];
    memset(buffer, 'A', sizeof(buffer));
    ft_bzero(buffer, sizeof(buffer));

    for (int i = 0; i < 10; i++) {
        MU_ASSERT("Buffer should be zeroed", buffer[i] == 0);
    }
    return 0;
}

// Test for partial zeroing of a buffer
static char *test_partial_zero() {
    char buffer[10];
    memset(buffer, 'A', sizeof(buffer));
    ft_bzero(buffer, 5);

    for (int i = 0; i < 5; i++) {
        MU_ASSERT("First half should be zeroed", buffer[i] == 0);
    }
    for (int i = 5; i < 10; i++) {
        MU_ASSERT("Second half should remain 'A'", buffer[i] == 'A');
    }
    return 0;
}

// Run all tests
static char *all_tests() {
    MU_RUN_TEST(test_full_zero);
    MU_RUN_TEST(test_partial_zero);
    return 0;
}

int main() {
    char *result = all_tests();
    if (result != 0) {
        printf("Test failed: %s\n", result);
    } else {
        printf("All tests passed!\n");
    }
    printf("Tests run: %d\n", g_tests_run);

    return result != 0;
}
