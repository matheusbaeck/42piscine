/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:34:16 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/10 21:35:27 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size / 2)
	{
		j = *(tab + size - i -1);
		*(tab + size - i -1) = *(tab + i);
		*(tab + i) = j;
		i++;
	}
}

/*
int	main(void)
{
	int size;
	int *tab;
	int arr[6] = {1, 2, 3, 4, 5, 6};
	int i;

	size = 6;
	tab = arr;
	ft_rev_int_tab(tab, size);

	i = 0;
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}

	return (0);
}*/