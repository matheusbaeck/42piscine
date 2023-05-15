/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:43:53 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/21 17:33:00 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb != 0)
	{
		n *= nb;
		nb--;
	}
	return (n);
}

/*
int main(int argc, char **argv)
{
	argv++;
	while (--argc)
	{
		printf("factorial:	%i\n", **argv - '0');
		printf("answ:		%d\n-----------------\n",
		ft_iterative_factorial(**argv - '0'));
		argv++;
	}
	return (0);
}*/
