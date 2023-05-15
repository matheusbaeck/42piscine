/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 04:58:49 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/16 23:13:34 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	if (i >= 0)
	{
		return (1);
	}
	return (1);
}

int main(void)
{
	int x;
	
	x = ft_str_is_alpha(""); //1
	x = ft_str_is_alpha("rio"); //1
	x = ft_str_is_alpha("MaDrId"); //1
	x = ft_str_is_alpha("born2code"); //0
	x = ft_str_is_alpha("42"); //0
	x = ft_str_is_alpha("#å"); //0
	return (0);
}