/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:30:58 by samusanc          #+#    #+#             */
/*   Updated: 2022/11/06 23:40:31 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_n(char c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(c);
		++i;
	}
}

void	ft_ult(int *l, int x)
{		
	if (*l != 1)
	{
		ft_print_n('B', 1);
		ft_print_n(' ', (x - 2));
		if (x != 1)
		{
			ft_print_n('B', 1);
		}
		ft_print_n('\n', 1);
		--*l;
	}
	else
	{
		ft_print_n('C', 1);
		ft_print_n('B', (x - 2));
		if (*l != 1)
		{
			ft_print_n('A', 1);
		}
		ft_print_n('\n', 1);
		--*l;
	}
}

void	rush(int x, int y)
{
	int	ancho;
	int	largo;
	int	*l;

	ancho = x;
	largo = y;
	l = &largo;
	if (x != 0 && y != 0)
	{
		ft_print_n('A', 1);
		ft_print_n('B', (x - 2));
		if (x != 1)
		{
			ft_print_n('C', 1);
		}
		ft_print_n('\n', 1);
		--largo;
		while (largo > 0)
		{
			ft_ult(l, x);
		}
	}
}