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

int *rule_book(int size)
{
    int i;
    int j;
    int *xy;

    i = 11;
    j = 0;
    xy = malloc(sizeof(int) * size * (size * size));
    while (i < size *11)
    {
        xy[j] = i;
        if (i % 4 == size)
        {
            i+= 11 - size;
        }
        else
        {
            i++;
        }
        j++;        
    }
}

int *rule_master(size)
{
    int *xy;
    int *per;
    int *rule;
    int i;
    int j;
    int *temp;
    
    xy = rule_book(size);
    per = permute_manager(size);
    rule = malloc(sizeof(int) * (size + 1) + (size * size) * size);
    tem = malloc(sizeof(int) * size)

    while(i < (size * size) + 1)
    {
        rule[i * (size * size) + 1] = xy[i];    
    }

    j = 0;
    while (j < size * size)
    {
        i = 0;
        tem[(i) % size] = per[i]; //recorta 1 linha da lista permute 
        while(rule_check(tem[i], xy[j], size) == 1)
        {
            while (i%size != size -1)
            {
                rule[(j* (size * size) + 1) + i%size + per[i]] = per[i]; //
                i++;
            }
        }
        j++;
    }


}


int *rule_masterr(int size) /* lista de todas las reglas */
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
    per = permute(size) /* lista de combinaciones de <size> algarismos */
    while (i <= permute_total(size))
    {
        if (rule_check([i]) == 1)
        {
            j = 0;
            while (j in per[i])
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

/*
combn = combn(size)
while ()
*/

int main(void)
{
    int *ptr;
    ptr = malloc(sizeof(int) * 5)
    ptr = {1, 2, 3, 4, 5}
}