/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:07:28 by marielidias       #+#    #+#             */
/*   Updated: 2024/11/01 12:09:51 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "minunit.h"

// Declare the function being tested (ft_strmapi)
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

// Declare the test counter as external
int g_tests_run = 0;

// Helper function to be used as the transformation function
char to_upper_if_even(unsigned int index, char c) {
    if (index % 2 == 0 && c >= 'a' && c <= 'z')
        return c - 32; // Convert to uppercase if it's a lowercase letter
    return c;
}

// Test cases

char *test_ft_strmapi_null_input() {
    char *result = ft_strmapi(NULL, to_upper_if_even);
    MU_ASSERT("Error: ft_strmapi did not handle NULL input", result == NULL);
    return 0;
}

char *test_ft_strmapi_empty_string() {
    char *result = ft_strmapi("", to_upper_if_even);
    MU_ASSERT("Error: ft_strmapi did not return an empty string", strcmp(result, "") == 0);
    free(result);
    return 0;
}

char *test_ft_strmapi_basic_transformation() {
    char *result = ft_strmapi("hello", to_upper_if_even);
    MU_ASSERT("Error: ft_strmapi did not apply the transformation function correctly",
              strcmp(result, "HeLlO") == 0);
    free(result);
    return 0;
}

char *test_ft_strmapi_no_change() {
    char *result = ft_strmapi("HELLO", to_upper_if_even);
    MU_ASSERT("Error: ft_strmapi incorrectly changed uppercase letters",
              strcmp(result, "HELLO") == 0);
    free(result);
    return 0;
}

// Test runner
char *all_tests() {
    MU_RUN_TEST(test_ft_strmapi_null_input);
    MU_RUN_TEST(test_ft_strmapi_empty_string);
    MU_RUN_TEST(test_ft_strmapi_basic_transformation);
    MU_RUN_TEST(test_ft_strmapi_no_change);
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
