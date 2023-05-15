/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:18:22 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/14 19:19:37 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *b % *b;
	*a = div;
	*b = mod;
}


int	main()
{
	int	a;
	int	*ptra;
	int	b;
	int	*ptrb;

	a = 20;
	b = 3;
	ptra = &a;
	ptrb = &b;

	printf("%p", &ptra);
	printf("%c", ' ');
	printf("%d", *ptra);
	printf("%c", '\n');
	printf("%p", &ptrb);
	printf("%c", ' ');
	printf("%d", *ptrb);
	printf("%c", '\n');

	ft_ultimate_div_mod(ptra, ptrb);
	printf("%c", '\n');

	printf("%p", &ptra);
	printf("%c", ' ');
	printf("%d", *ptra);
	printf("%c", '\n');
	printf("%p", &ptrb);
	printf("%c", ' ');
	printf("%d", *ptrb);
	printf("%c", '\n');

	return (0);
}