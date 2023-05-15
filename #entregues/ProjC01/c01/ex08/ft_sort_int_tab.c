/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:32:59 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/10 21:27:00 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (k < size)
	{
		while (i < size - 1)
		{
			j = tab[i];
			if (j > tab[i + 1] && (i + 1) < size)
			{
				tab[i] = tab[i + 1];
				tab[i + 1] = j;
			}
			i++;
		}
		i = 0;
		k++;
	}
}

/*
int	main(void)
{
	int size;
	int *tab;
	int arr[5] = {3, 4, 5, 1, 2};
	int i;

	size = 5;
	tab = arr;
	ft_sort_int_tab(tab, size);

	i = 0;
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}

	return (0);
}*/