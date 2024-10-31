/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:52:09 by mmariano          #+#    #+#             */
/*   Updated: 2024/10/31 09:05:54 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// I have to:
// -test normal test normal str
// -test start beyond lenght
// -test greates len
// -test null input

#include "minunit.h"
#include "libft.h"

int g_tests_run = 0;

static char *test_normal_substring() {
    char *s = "Hello, World!";
    char *result = ft_substr(s, 7, 5);
    MU_ASSERT("Error: Expected 'World'", strcmp(result, "World") == 0);
    free(result);  // Clean up allocated memory
    return 0;
}

static char *test_start_beyond_length() {
    char *s = "Hello";
    char *result = ft_substr(s, 10, 5);
    MU_ASSERT("Error: Expected empty string", strcmp(result, "") == 0);
    free(result);
    return 0;
}

static char *test_len_exceeds_remaining() {
    char *s = "Hello, World!";
    char *result = ft_substr(s, 7, 20);  // Requesting more than available
    MU_ASSERT("Error: Expected 'World!'", strcmp(result, "World!") == 0);
    free(result);
    return 0;
}

static char *test_null_input() {
    char *result = ft_substr(NULL, 0, 5);
    MU_ASSERT("Error: Expected NULL", result == NULL);
    return 0;
}

static char *all_tests() {
    MU_RUN_TEST(test_normal_substring);
    MU_RUN_TEST(test_start_beyond_length);
    MU_RUN_TEST(test_len_exceeds_remaining);
    MU_RUN_TEST(test_null_input);
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
<<<<<<< HEAD
}
=======
}
>>>>>>> c4c75d0 (arrumando test file)
