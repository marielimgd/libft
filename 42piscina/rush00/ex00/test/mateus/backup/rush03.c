/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalaibb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:08:01 by msalaibb          #+#    #+#             */
/*   Updated: 2024/08/17 23:52:41 by msalaibb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char a);
void	line_one(int y, int c_y, char p);
void	line_two(int y, int c_y);
void	rush(int x, int y);

void	line_one(int y, int c_y, char p)
{
	if (c_y == 1 && p == 't')
	{
		ft_putchar('A');
	}
	else if (c_y == y && p == 't')
	{
		ft_putchar('C');
	}
	else if (c_y == 1 && p == 'b')
	{
		ft_putchar('A');
	}
	else if (c_y == y && p == 'b')
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	line_two(int y, int c_y)
{
	if (c_y == 1 || c_y == y)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	c_x;
	int	c_y;

	c_x = 1;
	while (c_x <= x)
	{
		c_y = 1;
		while (c_y <= y)
		{
			if (c_x == 1)
			{
				line_one(y, c_y++, 't');
			}
			else if (c_x == x)
			{
				line_one(y, c_y++, 'b');
			}
			else
			{
				line_two(y, c_y++);
			}
		}
		write(1, "\n", 2);
		c_x++;
	}
}

int	main(int argc, char **argv)
{
    int x;
    int y;

    x = atoi(argv[1]);
    y = atoi(argv[2]);
    (void)argc;
	rush(x, y);
	return (0);
}
