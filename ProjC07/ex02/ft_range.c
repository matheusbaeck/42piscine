/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 04:51:00 by mamagalh@st       #+#    #+#             */
/*   Updated: 2022/11/21 04:51:07 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		*arr = 0;
		return (arr);
	}
	i = min;
	arr = malloc(sizeof(int) * (max - min));
	while (i < max)
	{
		*arr = i;
		arr++;
		i++;
	}
	return (arr + min - max);
}
