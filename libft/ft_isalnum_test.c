/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariano <mmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:34:37 by mmariano          #+#    #+#             */
/*   Updated: 2024/10/24 17:02:35 by mmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "minunit.h"

int	ft_isalnum(int c);

int g_tests_run = 0;

static char	*test_valid_alnum(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
		MU_ASSERT("Error: valid digit not recognized.", ft_isalnum(i) == 1);
	}
	for (int i = 'a'; i <= 'z'; i++)
	{
		MU_ASSERT("Error: valid lowercase letter not recognized.",
			ft_isalnum(i) == 1);
	}
	for (int i = 'A'; i <= 'Z'; i++)
	{
		MU_ASSERT("Error: valid uppercase letter not recognized.",
			ft_isalnum(i) == 1);
	}
	return (0);
}

static char	*test_non_alnum(void)
{
	MU_ASSERT("Error: '@' recognized as alphanumeric.", ft_isalnum('@') == 0);
	MU_ASSERT("Error: '!' recognized as alphanumeric.", ft_isalnum('!') == 0);
	MU_ASSERT("Error: ' ' recognized as alphanumeric.", ft_isalnum(' ') == 0);
	MU_ASSERT("Error: '\\n' recognized as alphanumeric.",
		ft_isalnum('\n') == 0);
	MU_ASSERT("Error: '\\0' recognized as alphanumeric.",
		ft_isalnum('\0') == 0);
	return (0);
}

static char	*all_tests(void)
{
	MU_RUN_TEST(test_valid_alnum);
	MU_RUN_TEST(test_non_alnum);
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
