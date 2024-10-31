/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:58:20 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/31 19:05:22 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h" // Include your ft_split prototype
#include "minunit.h" // Include the minunit header

int g_tests_run = 0;

// Test helper function to compare two string arrays
static int str_arr_compare(char **arr1, char **arr2) {
    while (*arr1 || *arr2) {
        if (!(*arr1) || !(*arr2) || (strcmp(*arr1, *arr2) != 0)) {
            return 0; // Arrays are not equal
        }
        arr1++;
        arr2++;
    }
    return 1; // Arrays are equal
}

static char *test_split_basic() {
    char **result = ft_split("hello world", ' ');
    char *expected[] = {"hello", "world", NULL};

    MU_ASSERT("Error: basic split failed", str_arr_compare(result, expected));

    // Freeing the allocated memory
    free(result[0]);
    free(result[1]);
    free(result);
    return NULL;
}

static char *test_split_multiple_spaces() {
    char **result = ft_split("hello   world", ' ');
    char *expected[] = {"hello", "world", NULL};

    MU_ASSERT("Error: split with multiple spaces failed", str_arr_compare(result, expected));

    // Freeing the allocated memory
    free(result[0]);
    free(result[1]);
    free(result);
    return NULL;
}

static char *test_split_empty_string() {
    char **result = ft_split("", ' ');
    char *expected[] = {NULL};

    MU_ASSERT("Error: split empty string failed", str_arr_compare(result, expected));

    // Freeing the allocated memory
    free(result);
    return NULL;
}

static char *test_split_no_delimiter() {
    char **result = ft_split("helloworld", ' ');
    char *expected[] = {"helloworld", NULL};

    MU_ASSERT("Error: split with no delimiter failed", str_arr_compare(result, expected));

    // Freeing the allocated memory
    free(result[0]);
    free(result);
    return NULL;
}

static char *test_split_leading_trailing_spaces() {
    char **result = ft_split("  leading and trailing  ", ' ');
    char *expected[] = {"leading", "and", "trailing", NULL};

    MU_ASSERT("Error: split with leading/trailing spaces failed", str_arr_compare(result, expected));

    // Freeing the allocated memory
    free(result[0]);
    free(result[1]);
    free(result[2]);
    free(result);
    return NULL;
}

static char *test_split_single_character() {
    char **result = ft_split("a", ' ');
    char *expected[] = {"a", NULL};

    MU_ASSERT("Error: split single character failed", str_arr_compare(result, expected));

    // Freeing the allocated memory
    free(result[0]);
    free(result);
    return NULL;
}

// Run all tests
static char *all_tests() {
    MU_RUN_TEST(test_split_basic);
    MU_RUN_TEST(test_split_multiple_spaces);
    MU_RUN_TEST(test_split_empty_string);
    MU_RUN_TEST(test_split_no_delimiter);
    MU_RUN_TEST(test_split_leading_trailing_spaces);
    MU_RUN_TEST(test_split_single_character);
    return NULL;
}

int main(void) {
    char *result = all_tests();
    if (result != NULL) {
        printf("%s\n", result);
    } else {
        printf("All tests passed. %d tests run.\n", g_tests_run);
    }
    return result != NULL; // Return 1 if there's an error, otherwise return 0
}
