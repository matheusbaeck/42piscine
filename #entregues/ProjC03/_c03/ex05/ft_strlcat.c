/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 01:24:38 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/20 18:41:02 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    dsize;

    i = 0;
    dsize = 0;
    while (dest[dsize])
    {
        dsize++;
    }
    while (*src && (i <= (size)))
    {
        dest[dsize] = src [i];
        dsize++;
        i++;
    }
    dest[dsize] = '\0';
    return (dsize);
}

int main(void)
{
    char dest[] = "";
    char src[] = "ganso";
    int n = 0;
    printf("original: %i\n", strlcat(dest, src, n));
    printf("proprio; %i\n", ft_strlcat(dest, src, n));
}