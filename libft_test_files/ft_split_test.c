/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:58:20 by marielidias       #+#    #+#             */
/*   Updated: 2024/11/05 12:15:11 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "minunit.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int g_tests_run = 0;

static void free_str(char **strs, int index) {
    while (index-- > 0) {
        free(strs[index]);
    }
    free(strs);
}


// Test cases for ft_strsplit
static char *test_split_multiple_delimiters() {
    char **result = ft_strsplit("hello,,world", ',');
    MU_ASSERT("Failed to split on multiple delimiters", result != NULL);
    MU_ASSERT("First word not found", strcmp(result[0], "hello") == 0);
    MU_ASSERT("Second word not found", strcmp(result[1], "world") == 0);
    MU_ASSERT("Expected NULL at the end", result[2] == NULL);
    free_str(result, 2); // Assuming a free_str implementation exists
    return NULL;
}

static char *test_split_no_delimiter() {
    char **result = ft_strsplit("hello", ',');
    MU_ASSERT("Failed to split with no delimiter", result != NULL);
    MU_ASSERT("Expected single word", strcmp(result[0], "hello") == 0);
    MU_ASSERT("Expected NULL at the end", result[1] == NULL);
    free_str(result, 1);
    return NULL;
}

static char *test_split_only_delimiters() {
    char **result = ft_strsplit(",,,,", ',');
    MU_ASSERT("Failed to handle string of only delimiters", result != NULL);
    MU_ASSERT("Expected NULL at the beginning", result[0] == NULL);
    free(result);
    return NULL;
}

static char *test_split_empty_string() {
    char **result = ft_strsplit("", ',');
    MU_ASSERT("Failed to handle empty string", result != NULL);
    MU_ASSERT("Expected NULL at the beginning", result[0] == NULL);
    free(result);
    return NULL;
}

static char *test_split_null_string() {
    char **result = ft_strsplit(NULL, ',');
    MU_ASSERT("Expected NULL for null input", result == NULL);
    return NULL;
}

static char *test_split_leading_delimiters() {
    char **result = ft_strsplit(",,hello,world", ',');
    MU_ASSERT("Failed to handle leading delimiters", result != NULL);
    MU_ASSERT("First word not found", strcmp(result[0], "hello") == 0);
    MU_ASSERT("Second word not found", strcmp(result[1], "world") == 0);
    MU_ASSERT("Expected NULL at the end", result[2] == NULL);
    free_str(result, 2);
    return NULL;
}

static char *test_split_trailing_delimiters() {
    char **result = ft_strsplit("hello,world,,", ',');
    MU_ASSERT("Failed to handle trailing delimiters", result != NULL);
    MU_ASSERT("First word not found", strcmp(result[0], "hello") == 0);
    MU_ASSERT("Second word not found", strcmp(result[1], "world") == 0);
    MU_ASSERT("Expected NULL at the end", result[2] == NULL);
    free_str(result, 2);
    return NULL;
}

// All tests function
static char *all_tests() {
    MU_RUN_TEST(test_split_multiple_delimiters);
    MU_RUN_TEST(test_split_no_delimiter);
    MU_RUN_TEST(test_split_only_delimiters);
    MU_RUN_TEST(test_split_empty_string);
    MU_RUN_TEST(test_split_null_string);
    MU_RUN_TEST(test_split_leading_delimiters);
    MU_RUN_TEST(test_split_trailing_delimiters);
    return NULL;
}


int main() {
    char *result = all_tests();
    if (result != NULL) {
        printf("%s\n", result);
    } else {
        printf("All tests passed.\n");
    }
    printf("Tests run: %d\n", g_tests_run);

    return result != NULL;
}

