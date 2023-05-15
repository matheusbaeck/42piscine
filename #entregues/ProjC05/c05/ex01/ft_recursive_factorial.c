/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:44:15 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/21 18:36:40 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb >= 1)
	{
		return (nb *= ft_recursive_factorial(nb - 1));
	}
	else
	{
		return (1);
	}
}
/*
int main(int argc, char **argv)
{
	argv++;
	while (--argc)
	{
		printf("factorial:	%i\n", **argv - '0');
		printf("answ:		%d\n-----------------\n",
		ft_recursive_factorial(**argv - '0'));
		argv++;
	}
	return (0);
}
*/
