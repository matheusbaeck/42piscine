/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 04:21:23 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/23 16:24:35 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	un;

	if (nb != -2147483648)
	{
		if (nb >= 0)
		{
			un = (nb % 10) + '0';
			nb = (nb / 10);
			if (nb != 0)
				ft_putnbr(nb);
			write (1, &un, 1);
		}
		else
		{
			write(1, "-", 1);
			ft_putnbr(nb);
		}
	}
	else
		write(1, "-2147483648", 11);
}

int main(void)
{
	ft_putnbr(11);
	return (0);
}
