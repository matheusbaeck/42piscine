/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:10:34 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/06 23:40:27 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush_aux(int x, int y, int a, int b)
{
	char	c;

	while (x > 0)
	{
		c = ' ';
		if ((x == 1 || x == a) && (y == 1))
			c = 'C';
		else if ((x == 1 || x == a) && (y == b))
			c = 'A';
		else if (((x == 1 || x == a) && (y != 1 || y != b))
			|| ((y == 1 || y == b) && (x != 1 || x != b)))
			c = 'B';
		ft_putchar(c);
		--x;
	}
}


void	rush(int x, int y)
{
	int		a;
	int		b;
	a = x;
	b = y;
	while (y > 0)
	{
		rush_aux(x, y, a, b);
		x = a;
		--y;
		ft_putchar('\n');
	}
}
