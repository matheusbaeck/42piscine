/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:50:35 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/10 13:03:43 by mamagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

/*
int main(void)
{
    int *a;
    int *b;
    int x;
    int y;

    a = &x;
    b = &y;
    x = 2;
    y = 7;

    printf("%p", &a);
    printf("%c", ' ');
    printf("%d", *a);
    printf("%c", '\n');
    printf("%p", &b);
    printf("%c", ' ');
    printf("%d", *b);
    printf("%c", '\n');

    ft_swap(a, b);
    printf("%c", '\n');

    printf("%p", &a);
    printf("%c", ' ');
    printf("%d", *a);
    printf("%c", '\n');
    printf("%p", &b);
    printf("%c", ' ');
    printf("%d", *b);
    printf("%c", '\n');
}*/
