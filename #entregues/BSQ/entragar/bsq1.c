#include <stdlib.h>
#include <stdio.h>

int	g_filas;
int	g_colum;
int	g_libre;
int	g_bloqueo;

g_filas = 9;
g_colum = 27;
g_libre = 0;
g_bloqueo = 1;

void	imprimrtablero(int tablero[g_filas][g_colum])
{
	char	caracter;
	int		i;
	int		j;

	i = 0;
	while (i < g_filas)
	{
		j = 0;
		while (j < g_colum)
		{
			if (tablero[i][j] == 0)
				caracter = '.';
			else
			{
				if (tablero[i][j] == 1)
					caracter = 'O';
				else
					caracter = 'X';
			}
			printf("%c", caracter);
			if (j == g_colum - 1)
				printf("\n");
			else
				printf(" ");
			j++;
		}
		i++;
	}
}

void	imprimrtablero2(char ** tablero, int fila, int g_colum)
{
	int	i;
	int	j;

	i = 0;
	while (i < g_filas)
	{
		j = 0;
		while (j < g_colum)
		{
			printf("%c", tablero[i][j]);
			if (j == g_colum - 1)
				printf("\n");
			j++;
		}
		i++;
	}
}
