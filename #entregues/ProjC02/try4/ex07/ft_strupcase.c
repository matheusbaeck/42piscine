/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:45:12 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/17 00:27:13 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lower(char str)
{
	while (str)
	{
		if (str >= 'a' && str <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (lower(str[i]) == 1)
		{
			str[i] -= ' ';
			str = ft_strupcase(str);
			return (str);
		}
		else
		{
			i ++;
		}
	}
	return (str);
}
