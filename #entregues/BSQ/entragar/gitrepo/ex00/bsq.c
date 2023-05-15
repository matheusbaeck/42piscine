/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:25:15 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/23 18:35:57 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	g_filas = 9;
int	g_colum = 27;
int	g_libre = 0;
int	g_bloqueo = 1;

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	imprimrtablero2(char **tablero, int fila, int col)
{
	int	i;
	int	j;

	j = 0;
	while (j < col)
	{
		i = 0;
		while (i < g_filas)
		{
			ft_putstr(&tablero[i][j]);
			i++;
		}
		ft_putstr("\n");
		i = 0;
		j++;
	}
}

char	**init_tab(char **kk, int fila, int col)
{
	int	i;
	int	j;

	kk = malloc(col * sizeof(char *));
	j = 0;
	while (j < col)
	{
		i = 0;
		kk[j] = malloc(fila * sizeof(char));
		while (i < fila)
		{
			kk[j][i] = '.';
			i++;
		}
		j++;
	}
	return (kk);
}

int	main(int argc, char **arg)
{
	char	**kk;
	char	*nombrefichero;
	int		iteradorficheros;
	int		i;
	int		j;

	iteradorficheros = 1;
	while (iteradorficheros < argc)
	{
		nombrefichero = arg[iteradorficheros];
		++iteradorficheros;
	}
	if (argc == 1)
	{
		init_tab(kk, g_filas, g_colum);
		imprimrtablero2(kk, g_filas, g_colum);
	}
}
