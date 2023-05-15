/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:45:08 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/24 03:28:39 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *a)
{
	while (*a)
	{
		write(1, a, 1);
		a++;
	}
	write(1, "\n", 1);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;

	i = 1;
	argv++;
	while (i < argc)
	{
		ft_putstr(*argv);
		argv++;
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}
