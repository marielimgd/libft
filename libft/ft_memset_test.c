/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:56:08 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/25 17:00:35 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "minunit.h"

int g_tests_run = 0;  // Initialize the test counter

// Declare the ft_memset function so we can test it
void *ft_memset(void *b, int c, size_t len);

// Test for filling an array with a specific character
static char *test_fill_with_char() {
    char buffer[10];
    ft_memset(buffer, 'A', sizeof(buffer));
    
    for (int i = 0; i < 10; i++) {
        MU_ASSERT("Buffer should be filled with 'A'", buffer[i] == 'A');
    }
    return 0;
}

// Test for setting array elements to zero
static char *test_fill_with_zero() {
    char buffer[10];
    ft_memset(buffer, 0, sizeof(buffer));
    
    for (int i = 0; i < 10; i++) {
        MU_ASSERT("Buffer should be filled with 0", buffer[i] == 0);
    }
    return 0;
}

// Test partial fill
static char *test_partial_fill() {
    char buffer[10];
    memset(buffer, 'B', sizeof(buffer));  // Fill entire buffer with 'B'
    ft_memset(buffer, 'C', 5);            // Partially fill with 'C'
    
    for (int i = 0; i < 5; i++) {
        MU_ASSERT("First half should be filled with 'C'", buffer[i] == 'C');
    }
    for (int i = 5; i < 10; i++) {
        MU_ASSERT("Second half should remain 'B'", buffer[i] == 'B');
    }
    return 0;
}

// Test empty fill (len = 0)
static char *test_empty_fill() {
    char buffer[10];
    memset(buffer, 'D', sizeof(buffer));  // Fill entire buffer with 'D'
    ft_memset(buffer, 'E', 0);            // Set len to 0; buffer should remain unchanged
    
    for (int i = 0; i < 10; i++) {
        MU_ASSERT("Buffer should remain unchanged", buffer[i] == 'D');
    }
    return 0;
}

// Test suite to run all tests
static char *all_tests() {
    MU_RUN_TEST(test_fill_with_char);
    MU_RUN_TEST(test_fill_with_zero);
    MU_RUN_TEST(test_partial_fill);
    MU_RUN_TEST(test_empty_fill);
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
