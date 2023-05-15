#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	rev_line(int *tab);
int *permute_manager(int size);

int line_check(int *line, int rule, int size) // returns 1 or 0 if a line respect an xy rule in one direction
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

int rule_check(int *line, int rule, int size) // returns i or zero if a line is valid according to a rule xy
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

//-----------------------------------------------------------------------

int *rule_book(int size) // returns one array with all possible rules for <size>
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
    return (xy);
}

int *rule_master(int size) // returns an array with only valid rules and
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
    temp = malloc(sizeof(int) * size);

    while(i < (size * size) + 1)
    {
        rule[i * (size * size) + 1] = xy[i];    
    }

    j = 0;
    while (j < size * size)
    {
        i = 0;
        temp[(i) % size] = per[i]; //recorta 1 linha da lista permute 
        while(rule_check(temp, xy[j], size) == 1)
        {
            while (i%size != size -1)
            {
                rule[(j* (size * size) + 1) + i%size + per[i]] = per[i]; //
                i++;
            }
        }
        j++;
    }
    return (rule);
}