/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 01:24:08 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/20 06:15:02 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	find;

	find = 0;
	while (*str && *to_find && find == 0)
	{
		i = 0;
		find = 0;
		while (str[i] == to_find[i])
		{
			find = 1;
			i++;
		}
		if (to_find[i] != '\0')
		{
			find = 0;
			str++;
		}
	}
	return (str);
}

int main(void)
{

    char a[] = "ladgfgdasdlbaeckjashdh";
    char b[] = "";
	printf("%s", ft_strstr(a, b));
}