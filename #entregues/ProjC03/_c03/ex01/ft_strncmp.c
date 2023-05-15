/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 01:23:02 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/20 17:24:15 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n <= 0)
	{
		return (0);
	}
	while (*s1 && *s2 && *s1 == *s2 && --n)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}


int	main(int argc, char **argv)
{
	printf("%i", ft_strncmp(argv[1], argv[2], argv[3][0]));
	printf("%i", strncmp(argv[1], argv[2], argv[3][0]));
	return (argc);
}