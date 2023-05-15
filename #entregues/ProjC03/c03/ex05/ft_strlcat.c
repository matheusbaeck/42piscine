/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 01:24:38 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/20 18:13:22 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    dsize;

    i = 0;
    dsize = 0;
    while (*dest)
    {
        dsize++;
    }
    while (*src && (dsize < (size - 1)))
    {
        dest[dsize] = src [i];
        dsize++;
        i++;
    }
    dest[dsize = '\0'];
    return (dsize);
}

int main(void)
{
    printf("%d", strlcat(dest, src, sizeof(buf)))
}