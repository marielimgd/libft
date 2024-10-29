/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:07:52 by marielidias       #+#    #+#             */
/*   Updated: 2024/10/24 10:36:16 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include <stdio.h>

int	ft_isdigit(int c);

int	g_tests_run = 0;

static char *test_valid_digits()
{
    for (int i = '0'; i <= '9'; i++)
    {
        MU_ASSERT("Error: valid digit not recognized.", ft_isdigit(i) == 1);
    }
    return 0;
}

static char	*test_non_digits(void)
{
	MU_ASSERT("Error: 'a' recognized as a digit.", ft_isdigit('a') == 0);
	MU_ASSERT("Error: 'Z' recognized as a digit.", ft_isdigit('Z') == 0);
	MU_ASSERT("Error: '!' recognized as a digit.", ft_isdigit('!') == 0);
	MU_ASSERT("Error: space recognized as a digit.", ft_isdigit(' ') == 0);
	MU_ASSERT("Error: '\\0' recognized as a digit.", ft_isdigit('\0') == 0);
	return (0);
}

static char	*all_tests(void)
{
	MU_RUN_TEST(test_valid_digits);
	MU_RUN_TEST(test_non_digits);
	return (0);
}

int	main(void)
{
	char	*result;

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
	return (result != 0);
}
