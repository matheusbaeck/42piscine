/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:45:29 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/17 06:47:12 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	lower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i ++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	space;

	lower(str);
	i = 0;
	space = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z')
			&& (str[i] < '0' || str[i] > '9'))
		{
			space = 1;
		}
		else if (str[i] > 'a' && str[i] < 'z' && space == 1)
		{
			str[i] -= 32;
			space = 0;
		}
		i++;
	}
	return (str);
}
