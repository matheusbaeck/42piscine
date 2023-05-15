/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:16:57 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/10 16:11:25 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

/*
int main()
{
	char	*str;
	char	len;
	char	a[] = "born2code";

	str = a;
	len = ft_strlen(str);
	printf("%i", len);
	return (0);
}*/