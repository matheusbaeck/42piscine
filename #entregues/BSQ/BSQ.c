/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:16:14 by dicontre          #+#    #+#             */
/*   Updated: 2022/11/23 16:33:26 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int   filas = 9;
int   colum = 27;

int   libre = 0;
int   bloqueo = 1;

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void    imprimrtablero(int tablero[filas][colum])
{
	int i,j;
	for(i = 0; i < filas; ++i)
		for(j = 0; j< colum; ++j){
			char caracter;
			if(tablero[i][j] == 0)
				caracter = '.';
			else{
				if(tablero[i][j] == 1)
					caracter = 'O';
				else
					caracter = 'X';
			}
			printf("%c",caracter );
			if(j == colum-1)
				printf("\n");
			else
				printf(" ");
		}
}

void imprimrtablero2(char ** tablero, int fila, int colum)
{
	int i,j;
	for(i = 0; i < filas; ++i)
		for(j = 0; j< colum; ++j){
			printf("%c",tablero[i][j]);
			if(j == colum-1)
				printf("\n");
		}
}

void buscarcuadrados(int tablero[filas][colum])
{
	int contador_de_cuadrados_min = 1;
	int i,j;
	int iniciofila = 0;
	int iniciocolum = 0;
	int haybloqueo = 0;
	int terminado = 0;
	int tamcuadradominimoencontrado = 0;
	int iniciofilacuadrado;
	int iniciocolumcuadrado;
	int finfilacuadrado;
	int fincolumcuadrad;
	while(iniciofila + contador_de_cuadrados_min < filas-1 && ! terminado){
		for(i = iniciofila; i <= iniciofila + contador_de_cuadrados_min && !haybloqueo; ++i)
        {
			
			for(j = iniciocolum; j <= iniciocolum + contador_de_cuadrados_min && !haybloqueo; ++j)
            {
				
				if(tablero[i][j] == bloqueo)
                {
					//este cuadrado no vale
					contador_de_cuadrados_min = 1;
					haybloqueo = 1;
					iniciocolum++;
					if(iniciocolum == colum -1)
                    {
						iniciocolum = 0;
						iniciofila++;
						if(iniciofila == filas -1)
							terminado = 1;
					}
				}

			}//fin for columnas
		}// fin for filas

		//Termina el for con todo correcto
		if(!haybloqueo)
        {
			if(tamcuadradominimoencontrado < contador_de_cuadrados_min && i-1-iniciofila == j - 1 - iniciocolum)
            {
				tamcuadradominimoencontrado = contador_de_cuadrados_min;
				iniciofilacuadrado = iniciofila;
				iniciocolumcuadrado = iniciocolum;
				finfilacuadrado = i-1;
				fincolumcuadrad = j-1;
			}
			contador_de_cuadrados_min++;
			//printf("Cuadrado encontrado\n");
		}
		else
        {
			//printf("no hay cuadrado, contador de cuadrados = %d\n",contador_de_cuadrados_min);
		}
		haybloqueo = 0;
		//si me paso de columna, incremento la fila y reseteo la columna
		if(iniciocolum + contador_de_cuadrados_min == colum)
        {
			iniciofila++;
			iniciocolum = 0;
			contador_de_cuadrados_min = 1;
		}

		//printf("en el while\n");
	}//fin while

	if(tamcuadradominimoencontrado > 0)
    {
		printf("El cuadrado va desde [%d][%d] hasta [%d][%d]\t tam = %d\n", iniciofilacuadrado,iniciocolumcuadrado,finfilacuadrado,fincolumcuadrad,tamcuadradominimoencontrado+1);
		printf("El tam es = %d\n",tamcuadradominimoencontrado);
		for(i = iniciofilacuadrado; i<= finfilacuadrado;++i)
			for(j = iniciocolumcuadrado; j <= fincolumcuadrad; ++j)
				tablero[i][j] = -1;

		imprimrtablero(tablero);
	}
	
}

char **readtablero(char *nombrefichero)
{
	FILE *ptr = fopen(nombrefichero,"r");
	if(NULL == ptr){
		printf("Fichero no existe\n");
	}else{
		printf("Fichero abierto\n");
	}
	char numLineas = fgetc(ptr); 	 //9
	if(numLineas == EOF)
		printf("Mapa incorrecto\n");
	char vacio = fgetc(ptr); 		 // .
	char ocupado = fgetc(ptr);		 // O
	char rellenar = fgetc(ptr);		 // X
	char siguientechar = fgetc(ptr); //debe ser un '\n'
	siguientechar = fgetc(ptr); 	 // primer elemento de la primera fila
	int contadorcolumnas = 0;
	int numcolumnanterior = 0;
	char contadorFilas = '1';
	int numfilasint = 1;

	while(siguientechar != EOF) 	 // recorrer el fichero caracter a caracter
    {
		siguientechar = fgetc(ptr);
		//printf("%c",siguientechar);
		if(siguientechar != vacio && siguientechar != ocupado && siguientechar != '\n' && siguientechar != '\r' && siguientechar != EOF){
			printf(" Caracter no válido ");
		}
		if(siguientechar == '\n')
        {
			if(numcolumnanterior == 0 )
            {
				numcolumnanterior = contadorcolumnas;
			}
			else
            {
				if(numcolumnanterior != contadorcolumnas)
					printf("Mapa incorrecto\n");
			}

			contadorcolumnas = 0;	
			contadorFilas++;
			numfilasint++;
		}
        else
        {
			contadorcolumnas++;
		}
	}
	if(contadorFilas != numLineas)
		printf("Mapa no valido\n");
	//printf("\nel tablero tiene %c filas y %d columnas\n",contadorFilas,numcolumnanterior); 
	fclose(ptr);

	// crear el tablero
	char **tablero;
	int iterador;
	tablero = malloc(numfilasint * sizeof(char *));
	iterador = 0;
	while (iterador < numcolumnanterior)
	{
		tablero = malloc(numcolumnanterior * sizeof(char));
		++ iterador;
	}

	//rellenar el tablero
	ptr = fopen(nombrefichero,"r");
	//leer hasta el primer elemento del tablero
	siguientechar = fgetc(ptr);
    siguientechar = fgetc(ptr); 		
	siguientechar = fgetc(ptr);		 
	siguientechar = fgetc(ptr);		 
	siguientechar = fgetc(ptr); 
	siguientechar = fgetc(ptr);
	int i = 0, j = 0;
	while(siguientechar != EOF){
		siguientechar = fgetc(ptr);
		if(siguientechar == '\n'){	
			i++;
			j=0;
			//printf("\n");
		}
        else
        {
			tablero[i][j] = siguientechar;
			//printf("%c",tablero[i][j]);
			j++;
		}
	}
	//printf("\n");
	
	return (tablero);
}

int main(int numArg, char **arg)
{

	printf("argumentos = %d\n",numArg);
	char *nombrefichero;
	int iteradorficheros;

	//When your program receives more than one map in argument, each solution or error must be followed by a line break.
	for(iteradorficheros = 1; iteradorficheros < numArg; ++iteradorficheros)
    {
		nombrefichero = arg[iteradorficheros];
		printf("Fichero = %s\n",nombrefichero);
	}

	//Should there be no passed arguments, your program must be able to read on the standard input.
	if(numArg == 1)
    {
		printf("Enter path to file:\n");
		scanf("%ms",&nombrefichero);
		printf("Fichero = %s\n",nombrefichero);
	}

	char **kk = readtablero(nombrefichero);


	//imprimrTablero(tablero);
	//printf("\n\nImprimiendo tablero\n\n");
	//imprimrtablero2(kk,filas,colum);
	//buscarcuadrados(tablero);

}