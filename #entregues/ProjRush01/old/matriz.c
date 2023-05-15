#include <stdio.h>
#include <stdlib.h>

/* square root of n */
int root(int n)
{
	int i;

	i = 0;
	while (i <= n / 2)
	{
		i++;

		if (i * i == n)
		{
			return (n);
		}
	}
	return (0);
}
 

/* builds the array for matriz and returns a pointer to matriz */
int *matriz_init(int size) 
{
	int *matriz;

	matriz = malloc(sizeof(int) * size);
    i = 0;
    while (i < size) //inicializa matriz
    {
        matriz[i] = (i+1);
        ++i;
    }
	return (matriz);
}

/* runs into values printing line by line */
void matriz_print(int *matriz)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j <= root(matriz_len(matriz)))
	{
		while (i != '\0')
		{
			printf("%d", *(matriz + i + j * 4));
			i++;
		}
		printf("%c", '\n');
		j++;
	}
}

/* crates and sums rules */
void ruler(int *matriz, int *rules);


/*
para verificar se é valido,
percorre linha e salva em temporario o maior valor encontrado
incrementa i quando encontra u um novo valor
se no final da linha i igual ao valor esperado (par xy, ps usar /10 e %10), é valido

se valido, soma as possibilidades num array de array que devearmazenar
todas as possibilidades que passam pela regra, posiçao por posiçao

repete o processo para o sentido contrario
compara os arrays e exclue valores que nao estao nos dois
exclui valores repitidos
ISSO VERIVICA REGRAS HORIZONTAIS PAR XY

faz o mesmo pra regras horizontais por posiçao

/* manage calls */
int main(void)
{
	printf("%i", root(16));
	matriz_print(matriz_init(16));
	return (0);
}

