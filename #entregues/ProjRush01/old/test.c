#include <stdlib.h>
#include <stdio.h>

void	rev_line(int *tab)
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

int line_check(int *line, int rule, int size)
{
    int i; /* percorer todos las posiciones*/
    int j; /* contador de cajas visibles */
    int max; /* caja mais alta visivel asta el momento */

    i = 0;
    max = 0;
    j = 0;
    while (i < size)
    {
        if (*(line + i) > max)
        {
            max = *(line + i);
            j++;
        }
        i++;
    }
    if (j == rule)
    {
        return (1);
    }
    return (0);
}

int rule_check(int *line, int rule, int size)
{
    int x;
    int y;

    x = line_check(line, rule / 10, size);
    rev_line(line);
    y = line_check(line, rule % 10, size);
    rev_line(line);

    if (x == 1 && y == 1)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int *rule_master(int size) /* lista de todas las reglas */
{
    int i;
    int *poss;

    poss = malloc(sizeof(int) * ((size * size) * size * size)) 
    /* 
    poss = [x*y] /combinaciones de regla/ = size
            [z] / la posicion relativa en la linea / = size
            [t] / tamanho de la caja / = size
    */

    i = 0;
    combn = comb_n(size) /* lista de combinaciones de <size> algarismos FUNCION NO HECHA */
    while (i <= comb_line(size))
    {
        if (rule_check(combn[i]) == 1)
        {
            j = 0;
            while (j in comb[i])
            {
                k = 0;
                while (k < size)
                {
                    *(poss + (4 * k) + combn[j][k]) = comb[i][k] //falta definir onde en *poss salvar la combinacion encontrada
                    /* poss salva */
                }
            }
            j++;
        }
        else
        {
            i++;
        }
    }
    retun (poss);
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------

int main(void)
{
    int *ptr;
    int i;
    int size;


    size = 4;
    ptr = malloc(sizeof(int) * size);
    i = 0;
    while (i < size) //inicializa matriz
    {
        ptr[i] = (i+1);
        ++i;
    }
    rev_line(ptr);


    i = 0;
    while (i < size) //inicializa matriz
    {
        printf("%i", ptr[i]);
        ++i;
    }
    printf("%c", '\n');
    i = rule_check(ptr, 14, size); // test rule_check and line_chek
    printf("%i", i);
    printf("%c", '\n');
    return (0);
}