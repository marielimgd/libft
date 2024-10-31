/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:43:41 by mmariano          #+#    #+#             */
/*   Updated: 2024/10/29 19:09:07 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "minunit.h"
#include "../libft.h"

int ft_isprint(int c);

int g_tests_run = 1;

static	char *test_isprintable(void)
{
	for (int i = 32; i <=126; i++)
	{
		MU_ASSERT("Error: printable character not recognized.", ft_isprint(i));
	}
	return (0);
}

static	char *test_non_printable(void)
{
	MU_ASSERT("Error: ASCII 31  recognized as printable", ft_isprint(30) == 0);
	MU_ASSERT("Error: Error: ASCII 127 recognized as printable.", ft_isprint(127) == 0);
	MU_ASSERT("Error: negative value recognized as printable.", ft_isprint(-1) == 0);
	MU_ASSERT("Error: value 128 recognized as printable.", ft_isprint(128) == 0);
	return(0);
}
static char *all_tests()
{
	MU_RUN_TEST(test_isprintable);
	MU_RUN_TEST(test_non_printable);
	return (0);
}

int	main(void)
{
	char	*result = all_tests();

	if (result != 0)
	{
		printf("%s\n", result);
	}
	else
	{
		printf("ALL	TESTS PASSED!\n");
	}
	printf("Total tests run: %d\n", g_tests_run);
	return (result != 0);
}