/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crnavas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:33:42 by crnavas-          #+#    #+#             */
/*   Updated: 2022/11/19 23:22:25 by crnavas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUF_SIZE 10

char	*dicc(void)
{
	int		fd;
	int		ret;
	char	*buf[4096 + 1];
	char	test[4069];
	char	*dicc;
	int		prueba;
	int		total;

	dicc = malloc(sizeof(buf));
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 12);
	}
	while ((ret = read(fd, buf, 2048)))
		total += ret;
	close(fd);
	fd = open("numbers.dict", O_RDONLY);
	prueba = read(fd, test, total);
	test[total + 1] = '\n';
	//printf("Total: %d y cadena \n%s", total, test);
	if (close(fd) == -1)
		write(1, "Error al cerrar el fichero", 28);
	dicc = test;
	return (dicc);
}

int	main(void)
{
	printf("Diccionario:\n%s", dicc());
	//free(dicc);
}
