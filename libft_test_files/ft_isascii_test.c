/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:00:58 by mmariano          #+#    #+#             */
/*   Updated: 2024/10/29 19:09:02 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include <stdio.h>
#include "../libft.h"

int	ft_isascii(int c);

int	g_tests_run = 0;

static char	*test_valid_ascii(void)
{
	for (int i = 0; i <= 127; i++)
	{
		MU_ASSERT("Error: valid ASCII character not recognized.",
			ft_isascii(i) == 1);
	}
	return (0);
}

static char	*test_nonascii(void)
{
	MU_ASSERT("Error: 128 recognized as ASCII.", ft_isascii(128) == 0);
	MU_ASSERT("Error: 255 recognized as ASCII.", ft_isascii(255) == 0);
	MU_ASSERT("Error: -1 recognized as ASCII.", ft_isascii(-1) == 0);
	return (0);
}

static char	*all_tests(void)
{
	MU_RUN_TEST(test_valid_ascii);
	MU_RUN_TEST(test_nonascii);
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
