/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:24:08 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/06 15:44:00 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void rush1(int x, int y)
{
	int a;

	a=x;
	while(y>0)
	{
		posx(x,y,a);
		x=a;
		--y;
		ft_putchar('\n');
	}
}

int	posx(int x, int y, int x)
{
	while(x>0)
		{
			if (a==x || x==1)
        	{
				if (a==y || y==1)
				{
					ft_putchar('o');
				}
				else
				{
					ft_putchar('|');
				}
        	}
        	else if (a==y || y==1)
        	{
            	ft_putchar('-');
        	}
			else
			{
				ft_putchar(' ');
			}
			--x;		
		}
	return(x, y, a)
}

