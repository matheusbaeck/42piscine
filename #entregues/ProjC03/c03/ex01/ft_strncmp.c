/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 01:23:02 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/20 18:02:10 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
