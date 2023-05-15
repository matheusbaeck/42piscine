/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 04:21:23 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/21 01:50:19 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	a;
	int		m;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 14748648;
	}
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	if (nb < 10)
		m = nb;
	else
		m = nb % 10;
	a = m + 48;
	write(1, &a, 1);
}

int	main(int argc, char **argv)
{
	while (argc--)
	{
		ft_putnbr(**argv);
	}
}
