/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:07:36 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/13 23:07:41 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int matriz_len(int *matriz);
int *rule_master(int size);

int matriz_map_gen(int *mapv, int *maph, int size)
{
    int *map;
    int i;
    int j;
    int *rule;

    rule = rule_master(size);
    map = malloc(sizeof(int) * 2 * size);
    i = 0;
    while (i < size)
    {
        j = 0;
        while (i < size * size && mapv[i] == rule[j * 21])
        {
            printf("%d", rule[j]);
        }
    }
    return (0);
}

void *rule_mapv(int str)
{
    int *ptr;
    int i;
    int *mapv;
    int *maph;

    mapv = "NULL";
    mapv = malloc(sizeof(int) * (matriz_len(ptr) + 1) / 8);
    ptr = &str;
    i = 0;
    while (i < (matriz_len(ptr) + 1) / 8)
    {
        if (i < 16)
        {
            mapv [i] = ptr[i * 2] * 10 + ptr[2 * (i + (matriz_len(ptr) + 1) / 8)];
        }
        else
        {
            mapv [i] = ptr[i * 2] * 10 + ptr[2 * (i + (matriz_len(ptr) + 1) / 8)];
        }
         
    }
    matriz_map_gen(mapv, maph, (matriz_len(ptr) + 1) / 8);
}