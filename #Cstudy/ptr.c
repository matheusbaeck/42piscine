/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:38:39 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/09 17:59:54 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	a;
	char	s;
	int		m;

	s = '-';
	if (nb < 0)
	{
		nb *= -1;
		write(1, &s, 1);
	}
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	if (nb < 10)
		m = nb;
	else
		m = nb % 10;
	a = m + 48;
	write(1, &a, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int   main(void)
{
   int   a;
	int	b;
   int   *ptr;
   int   **ptr2;

   a = 5;
   ptr = &a;/*ptr armazzena endereco de a*/
   ft_putnbr(a);
   ft_putnbr(*ptr); /*printao valor do endereco que o pontero aponta*/
   ft_putchar('/');
   a = 6;
   ft_putnbr(a);
   ft_putnbr(*ptr); /*o ponteiro continua apontando pro mesmo endereco mesmo que o valor seja mudado*/
	ft_putchar('/');

	ptr2 = &ptr; /*ptr aponta para o endereco de outro ptr*/
	ft_putnbr(**ptr2); /*ptr para ptr para valor, retorna o valor*/
	ft_putchar('/');

	b = 42;
	ptr = &b;
	ft_putnbr(ptr);
	ft_putchar(' ');
	ft_putchar(*ptr);
	ft_putchar('\n');
	ft_putnbr(&b);
	ft_putchar(' ');
	ft_putchar(*ptr);



}