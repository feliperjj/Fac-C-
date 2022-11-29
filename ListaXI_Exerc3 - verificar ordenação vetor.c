/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 09/12/2021
	
	Lista de Exerc�cios XI (Vetores)

	QUEST�O 03:
	Pede-se a implementa��o de uma fun��o que, dado um vetor contendo n�meros reais, 
	determine se o mesmo encontra-se ordenado de forma crescente.
	
	Exemplos:
	
				vetor1: 	0  3  4  5  6  6  7  8  9  9	
							
							Resposta: est� ordenado crescentemente


				vetor2: 	0  3  4  5  6  6  8  7  9  9	
						                      i  j
							Resposta: n�o est� ordenado crescentemente

						
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM1 10
#define TAM2 100

//fun��o verificaOrdenacao
/*
	A fun��o retornar� 1 se o vetor estiver ordenado crescentemente ou 0, caso contr�rio.
*/
int verificaOrdenacao (float vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i, j;
	
	//percorrendo o vetor
	for (i=0,j=1;j<tamanho;i++,j++)
	{
		//verificando se os dois elementos n�o est�o ordenados
		if (vetor[i] > vetor[j])
		{
			return 0;
		}
		/*else    Erro: pois, assim, a fun��o terminaria prematuramente.
		{
			return 1;
		}*/
	}
	
	//se a execu��o chegou neste ponto, podemos garantir que o vetor est� ordenado crescentemente
	return 1;	
}

//fun��o preencherAleatorio
void preencherAleatorio (float v[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	srand (time(NULL));
	
	for (i=0;i<tamanho;i++)
	{
		v[i] = 1 + rand()%100;  //gerando n�meros aleat�rios no intervalo de 1 a 100
	}
}

//fun��o exibir
void exibir (float v[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	//exibindo os elementos do vetor
	printf ("\nElementos do vetor: ");
	for (i=0;i<tamanho;i++)
	{
		printf ("%.1f ", v[i]);
	}
	printf ("\n\n");
}

//main
void main ()
{
	//declara��o de vari�veis
	float vetor1[TAM1] = {0,1,3,4,4,5,6,7,8,9}, 
	      vetor2[TAM2];
	int resposta;
	
	//preenchendo o vetor 2 com n�meros aleat�rios
	preencherAleatorio (vetor2, TAM2);
	
	//exibindo os elementos dos vetores
	exibir (vetor1, TAM1);
	exibir (vetor2, TAM2);

	//chamando a fun��o para o vetor 1
	resposta = verificaOrdenacao (vetor1, TAM1);
	if (resposta == 1)
	{
		printf ("\nvetor 1 esta ordenado!\n");
	}
	else
	{
		printf ("\nvetor 1 nao esta ordenado!\n");
	}
	
	//chamando a fun��o para o vetor 2
	resposta = verificaOrdenacao (vetor2, TAM2);
	if (resposta == 1)
	{
		printf ("\nvetor 2 esta ordenado!\n");
	}
	else
	{
		printf ("\nvetor 2 nao esta ordenado!\n");
	}
}
