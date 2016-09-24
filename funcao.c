/**
	\mainpage
	\author João Victor de Souza Poletti 150132425
	\date 23/09/2016

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcao.h"

/** \brief  Função que trasforma numero romano para número arábico.*/
int retorna_n_arabico(const char *get_roman)
{
	/** 
	\details Recebe a string contendo o número romano e irá retornar o número correspondente em arábico, se existir(-1 caso não exista).
	\param get_roman é a string correspondente ao número romano.
	\return O número em arábico, ou -1 caso não exista.
	*/

	/*Criação de Variáveis*/
	int i, *vetor_contador, maior_simbolo_indice, contador_direita = 0, contador_esquerda = 0;
	char vetor_n_romanos[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
	int numero_em_arabico = 0, j, k,check = 0,*vetor_frequencia, flag=-1;

	/*
	Alocação dos dois vetores
	*/
	
	/*vetor_contador existe com o intuito de relacionar o caracter com o seu número em arábico.*/
	vetor_contador = (int *)calloc(strlen(get_roman),sizeof(int));
	/*vetor_frequencia foi criado com o objetivo de contabilizar a frequência de cada caracter.*/
	vetor_frequencia = (int *)calloc(7,sizeof(int));

	for(i=0;i<strlen(get_roman);i++)
	{
		switch(get_roman[i])
		{
			case 'I':
				vetor_contador[i] = 1;
				vetor_frequencia[0]++;
				break;

			case 'V':
				vetor_contador[i] = 5;
				vetor_frequencia[1]++;
				break;
			
			case 'X':
				vetor_contador[i] = 10;
				vetor_frequencia[2]++;
				break;
			
			case 'L':
				vetor_contador[i] = 50;
				vetor_frequencia[3]++;
				break;
			
			case 'C':
				vetor_contador[i] = 100;
				vetor_frequencia[4]++;
				break;
			
			case 'D':
				vetor_contador[i] = 500;
				vetor_frequencia[5]++;
				break;

			case 'M':
				vetor_contador[i] = 1000;
				vetor_frequencia[6]++;	
				break;

			default:
			/*
			Caso algum caracter diferente dos anteriores fizer parte da string digitada pelo usuário,
			libera-se os vetores alocados e retorna-se -1.
			*/
				free(vetor_contador);
				free(vetor_frequencia);
				return -1;
		}
	}
	maior_simbolo_indice = 0; // guarda o indice do maior simbolo no vetor_contador.
	/*
	Acha-se o índice do maior símbolo da string digitada pelo usuário.
	*/
	for(i = 1;i < strlen(get_roman);i++)
	{
		if(vetor_contador[i] > vetor_contador[maior_simbolo_indice])
		{
			maior_simbolo_indice = i;
		}
	}
	return maior_simbolo_indice;
}
