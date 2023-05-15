/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:45:19 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/17 00:27:29 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	upper(char str)
{
	while (str)
	{
		if (str >= 'A' && str <= 'Z')
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

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (upper(str[i]) == 1)
		{
			str[i] += ' ';
			str = ft_strlowcase(str);
			return (str);
		}
		else
		{
			i++;
		}
	}
	return (str);
}
