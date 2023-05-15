/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:45:10 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/21 18:36:57 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = 1;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	while (power--)
	{
		n *= nb;
	}
	return (n);
}
/*
int main(int argc, char **argv)
{
	argv++;
	while (--argc)
	{
		printf("power: 	%i ^%i\n", *argv[0] - '0', *argv[1] - '0');
		printf("answ:		%i\n-----------------\n",
		ft_iterative_power(*argv[0] - '0', *argv[1] - '0'));
	}
	return (0);
}
*/
