/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftisalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 08:59:28 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/24 10:06:41 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include <stdio.h>
#include "../libft.h"

int	ft_isalpha(char c);

int	g_tests_run = 0;

// Test functions
static char*test_uppercase_letters()
{
	MU_ASSERT("Error: 'A' is not recognized as alphabetic.", ft_isalpha('A') == 1);
	MU_ASSERT("Error: 'Z' is not recognized as alphabetic.", ft_isalpha('Z') == 1);
	return (0);
}

static char *test_lowercase_letters()
{
	MU_ASSERT("Error: 'a' is not recognized as alphabetic.", ft_isalpha('a') == 1);
	MU_ASSERT("Error: 'z' is not recognized as alphabetic.", ft_isalpha('z') == 1);
	return (0);
}

static char *test_non_alpha_chars()
{
	MU_ASSERT("Error: '0' is incorrectly recognized as alphabetic.", ft_isalpha('0') == 0);
	MU_ASSERT("Error: '@' is incorrectly recognized as alphabetic.", ft_isalpha('@') == 0);
	MU_ASSERT("Error: '[' is incorrectly recognized as alphabetic.", ft_isalpha('[') == 0);
	MU_ASSERT("Error: '!' is incorrectly recognized as alphabetic.", ft_isalpha('!') == 0);
	return (0);
}

/* Main function to run all tests */
static char *all_tests()
{
	MU_RUN_TEST(test_uppercase_letters);
	MU_RUN_TEST(test_lowercase_letters);
	MU_RUN_TEST(test_non_alpha_chars);
	return 0;
}

int main(void)
{
	char *result;

	result = all_tests();
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
