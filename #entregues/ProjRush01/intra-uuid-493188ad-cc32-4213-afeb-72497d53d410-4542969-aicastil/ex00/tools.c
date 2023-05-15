/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:09:02 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/13 23:09:04 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int matriz_len(int *matriz)
{
	int i;

	i = 0;
	while (*(matriz + i) != '\0')
	{
		i++;
	}
	return (i);
}

void	rev_line(int *tab) // reverse an array
{
	int	i;
	int	j;
    int size;

    size = matriz_len(tab);
	i = 0;
	while (i < size / 2)
	{
		j = *(tab + size - i -1);
		*(tab + size - i -1) = *(tab + i);
		*(tab + i) = j;
		i++;
	}
}

int permute_total(int n) // return total of combinations of <n> digits (permute aux)
{
	int i;

	i = n;
	while (i > 1)
	{
		i--;
		n = n * i;
	}
	return (n);
}

void swap(int *v, const int i, const int j) //swaps elements of an array (permute aux)
{
    int t;
    t = v[i];
    v[i] = v[j];
    v[j] = t;
}