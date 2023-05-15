/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 02:24:59 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/09 12:42:54 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>

int power(int potencia)
{
    int p;

    if (potencia <= 0)
    {
        return (1);
    }
    else
    {
        p = 10 * power(potencia - 1);
        return (p);
    }
}


int    len_n(int n)
{
    int i=0;
    while (n < 10)
    {
        i++;
        n /= 10;
    }
    return (i);
}

int ft_print_combn(n)
{
    int i;
    int j;
    int nb;

    i = 1;
    nb = len_n(n);
    while (i < nb) /*se é menor que o proximo n --*/
    {
        if ((n * power(i)) > (n * power(i + 1) + 1))
        {
            n -= power(i);
            ft_print_combn(n);
            write(1 , &n, 1);
        }
        else
        {
            i++;
        }
    }
    if (n * power(nb) == 0)
    {
        write(1, &n, 1);
        return (0);
    }
    else
    {
        n -= n * 10 ^ nb;
        ft_print_combn(n);
        write(1,&n ,1);
        return (0);

    }
}