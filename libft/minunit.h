/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marielidias <marielidias@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:35:40 by mmariano          #+#    #+#             */
/*   Updated: 2024/10/25 09:23:06 by marielidias      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINUNIT_H
# define MINUNIT_H

# define MU_ASSERT(message, test) do { if (!(test)) return message; } while (0)
# define MU_RUN_TEST(test) do { char *message = test(); g_tests_run++; \
                                if (message) return message; } while (0)
extern int g_tests_run;

#endif
