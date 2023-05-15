/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:48:15 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/09 11:46:12 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_canvas(int a, int b)
{
	int	x;

	x = 48 + (a / 10);
	write(1, &x, 1);
	x = 48 + (a % 10);
	write(1, &x, 1);
	write(1, " ", 1);
	x = 48 + (b / 10);
	write(1, &x, 1);
	x = 48 + (b % 10);
	write(1, &x, 1);
	if (!(a == 98 && b == 99))
		write(1, ", ", 1);
}

void	ft_print_comb2(void)
{
	int	j;
	int	i;

	j = 0;
	while (j <= 98)
	{
		i = j + 1;
		while (i <= 99)
		{
			ft_canvas(j, i);
			i++;
		}
		j++;
	}
}
