/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:50:11 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/22 20:53:08 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = nb / 2;
	while (n <= 23170)
	{
		if (n * n == nb)
		{
			return (n);
		}
		n--;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	n;
	int	i;

	n = 1;
	i = ft_sqrt(nb);
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	while (n <= (nb / 2))
	{
		if (nb % n == 0)
		{
			i++;
		}
		n++;
	}
	if (i == 1)
	{
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
/*
int main(void)
{
	printf("answ:		%i\n", ft_find_next_prime(410565440));
	return (0);
}
*/