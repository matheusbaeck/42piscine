/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:03:30 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/21 19:04:02 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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
	argv += (argc - 1);
	while (i < argc)
	{
		ft_putstr(*argv);
		argv--;
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}
