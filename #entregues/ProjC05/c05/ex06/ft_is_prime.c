/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:48:27 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/21 18:35:51 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;
	int	i;

	n = 1;
	i = 0;
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

/*
int main(void)
{
	printf("answ:		%i\n", ft_is_prime(955));
	return (0);
}
*/