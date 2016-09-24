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
	/*
	Checa a existência dessa string.
	*/
	check = checa_existencia_roman(get_roman, vetor_contador, vetor_frequencia, maior_simbolo_indice);

	if(check == 1) // se este numero, de fato, existe.
	{
		if(maior_simbolo_indice == 0) // se o maior símbolo está no índice 0.
		{
			for(i = 1;i < strlen(get_roman) - 1; i++)//indo de dois em dois verificando se estão na ordem adequada.
			{
				if(vetor_contador[i] < vetor_contador[i+1] && strlen(get_roman) > 2 && vetor_contador[i] != 0) 
				{
					vetor_contador[i] = vetor_contador[i+1] - vetor_contador[i];
					vetor_contador[i+1] = 0;
				}
			}
			for(j = 0;j < strlen(get_roman); j++)
			{
				numero_em_arabico = numero_em_arabico + vetor_contador[j]; 
			}

		}
		else // maior símbolo não está no índice 0.
		{
			for(k = 0;k < maior_simbolo_indice; k++) // do início da string até chegar no maior símbolo(conta a parte esquerda).
			{
				contador_esquerda = contador_esquerda + vetor_contador[k];		
			}
			for(i = maior_simbolo_indice; i < strlen(get_roman) - 1; i++)//indo de dois em dois verificando se estão na ordem adequada.
			{
				if(vetor_contador[i] < vetor_contador[i+1] && strlen(get_roman) > 2) // do maior símbolo até o final da string(conta a parte direita).
					{
						vetor_contador[i] = vetor_contador[i+1] - vetor_contador[i];
						vetor_contador[i+1] = 0;
						i++;
					}
			}
			for(j = maior_simbolo_indice; j < strlen(get_roman); j++)
			{
				contador_direita = contador_direita + vetor_contador[j];
			}
			
			numero_em_arabico = contador_direita - contador_esquerda;
		}
		free(vetor_contador);
		free(vetor_frequencia);
		return numero_em_arabico;
	}

	else
	{
		free(vetor_contador);
		free(vetor_frequencia);
		return -1;
	}

}

/** \brief  Função que checa a validez do numero romano.*/
int checa_existencia_roman(const char *get_roman, int *vetor_contador, int *vetor_frequencia, int maior_simbolo_indice)
{

	/** 
	\details Recebe a string, os vetores de controle e o índice do maior símbolo com o intuito de verificar a validez do número romano.
	\param get_roman É a string correspondendo ao número romano.
	\param *vetor_contador É o vetor que contém as relações do caracteres em romano com o seu respectivo número em arábico.
	\param *vetor_frequencia É o vetor que contém as frequências de cada caracter da string.
	\param maior_simbolo_indice Contém o índice do maior símbolo encontrado na string.
	\return 1 se a string for válida, ou 0 caso não seja.
	*/

	int i, j;
	/*
	Este for checa a frequência de cada caracter, respeitado o número máximo de vezes que ele pode aparecer, tendo em mente o range
	de 1 até 3000.
	*/	
	for(i = 0;i < strlen(get_roman);i = i + 2)
	{
		if(vetor_frequencia[i] > 3 && i!=2 && i!=4) // os caracteres I, M aparecem, no máximo, até 3 vezes
		{
			return 0;
		}
		if(vetor_frequencia[i] > 4 && i == 2 || vetor_frequencia[i] > 4 && i == 4) // o X e o C podem aparecer até 4 vezes
		{
			return 0;
		}
	}

	
	if(vetor_frequencia[2] == 4 && strlen(get_roman) == 4)// se o X apareceu 4 vezes e o tamanho da string é 4
		return 0;
	if(vetor_frequencia[4] == 4 && strlen(get_roman) == 4)// se o C apareceu 4 vezes e o tamanho da string é 4
		return 0;	
	/*
	Caso o índice do maior símbolo estiver além do índice 1 da string, esta é, portanto, inválida.
	*/
	if(maior_simbolo_indice > 1)
		return 0;
	
	/*
	Este for visa a checagem da ideia de que, em qualquer caracter da string, a partir do segundo caracter anterior a ele
	(se 'i' é o índice atual, a partir de 'i-2') só devem existir caracteres maiores ou iguais a ele.
	Caso tenha caracteres menores, a string é inválida.
	*/
	for(i=2;i<strlen(get_roman);i++)
	{
		for(j = i-2;j > 0; j--)
		{
			if(vetor_contador[i] > vetor_contador[j])
			{
				return 0;
			}
		}
	}

	if(maior_simbolo_indice > 0)
		if(vetor_contador[maior_simbolo_indice] == vetor_contador[maior_simbolo_indice + 1])	
			return 0;

	return 1;

}
