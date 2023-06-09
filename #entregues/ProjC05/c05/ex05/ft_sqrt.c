/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:48:19 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/21 00:48:20 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	while (n <= 46340)
	{
		if (n * n == nb)
		{
			return (n);
		}
		n++;
	}
	return (0);
}
