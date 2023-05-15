/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:48:15 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/09 12:53:23 by mamagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int k, int j, int i)
{
	write(1, &k, 1);
	write(1, &j, 1);
	write(1, &i, 1);
	if (k < '7')
		write(1, ", ", 1);
	++i;
}

void	ft_print_comb(void)
{
	char	k;
	char	j;
	char	i;

	k = '0';
	j = '1';
	i = '2';
	while (k <= '7')
	{
		while (j <= '8')
		{
			while (i <= '9')
			{
				print(k, j, i);
				++i;
			}
			++j;
			i = j + 1;
		}
		++k;
		j = k + 1;
		i = j + 1;
	}
}
