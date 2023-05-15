/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 01:23:41 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/18 02:38:57 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	char			*vector;

	vector = dest;
	j = 0;
	while (*dest)
	{
		dest++;
	}
	while (*src && j < nb)
	{
		dest[j] = *src;
		src++;
		j++;
	}
	dest[j] = '\0';
	return (vector);
}
