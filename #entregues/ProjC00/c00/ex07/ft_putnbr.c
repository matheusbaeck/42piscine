/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 02:14:46 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/08 14:12:31 by mamagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	a;
	char	s;
	int		m;

	s = '-';
	if (nb < 0)
	{
		nb *= -1;
		write(1, &s, 1);
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
