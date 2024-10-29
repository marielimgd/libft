/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:44:17 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/25 17:56:47 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "minunit.h"

int g_tests_run = 0;

void *ft_memcpy(void *dst, const void *src, size_t n);

// Test for copying entire array
static char *test_full_copy() {
    char src[10] = "abcdefghij";
    char dst[10];
    ft_memcpy(dst, src, 10);

    MU_ASSERT("Full copy should match src", memcmp(dst, src, 10) == 0);
    return 0;
}

// Test for copying a partial array
static char *test_partial_copy() {
    char src[10] = "abcdefghij";
    char dst[10] = "xxxxxxxxxx";
    ft_memcpy(dst, src, 5);

    for (size_t i = 0; i < 5; i++) {
        MU_ASSERT("First half should match src", dst[i] == src[i]);
    }
    // Check the remaining part
    for (size_t i = 5; i < 10; i++) {
        MU_ASSERT("Remaining part should stay unchanged", dst[i] == 'x');
    }
    return 0;
}

// Test for overlapping memory copy (src < dst)
static char *test_overlap_forward() {
    char buffer[10] = "abcdefghij";
    ft_memcpy(buffer + 2, buffer, 5); // Overlapping copy

    MU_ASSERT("Buffer should handle forward overlap", memcmp(buffer, "ababcdehij", 10) == 0);
    return 0;
}

// Test for overlapping memory copy (dst < src)
static char *test_overlap_backward() {
    char buffer[10] = "abcdefghij";
    ft_memcpy(buffer, buffer + 2, 5); // Overlapping copy

    MU_ASSERT("Buffer should handle backward overlap", memcmp(buffer, "cdefghij", 10) == 0);
    return 0;
}

// Run all tests
static char *all_tests() {
    MU_RUN_TEST(test_full_copy);
    MU_RUN_TEST(test_partial_copy);
    MU_RUN_TEST(test_overlap_forward);
    MU_RUN_TEST(test_overlap_backward);
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
