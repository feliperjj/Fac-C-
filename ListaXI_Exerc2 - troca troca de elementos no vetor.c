/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 09/12/2021
	
	Lista de Exerc�cios XI (Vetores)

	QUEST�O 02:
	Implementar uma fun��o que, dado um vetor de reais, troque o 1� e o 2� elementos, em 
	seguida o 3� e o 4� elementos e assim sucessivamente, at� se chegar ao final do vetor.
	
	Exemplo 1:
	
				Inicialmente:     
					vetor: 5 4 6 8 1 2 4 7 8 5
						                       i j
						   	
				Ao final:
					vetor: 4 5 8 6 2 1 7 4 5 8


	Exemplo 2:
	
				Inicialmente:     
					vetor: 4 6 8 1 2 4 7 8 5
					       0 1 2 3 4 5 6 7 8
					                       i j
					       
				Ao final:
					vetor: 6 4 1 8 4 2 8 7 5
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 10

//fun��o trocarElementos
void trocarElementos (float vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i, j;
	float aux;
	
	//procedendo com a troca dois a dois
	for (i=0,j=1;j<tamanho;i=i+2,j=j+2)
	{
		//trocando os elementos vetor[i] e vetor[j]
		aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
	}
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
	float vetor1[TAM];
	
	//preenchendo o vetor com n�meros aleat�rios
	preencherAleatorio (vetor1, TAM);
	
	//exibindo os elementos do vetor
	exibir (vetor1, TAM);

	//chamando a fun��o para a troca dos elementos
	trocarElementos (vetor1, TAM);
	
	//exibindo os elementos do vetor ap�s a troca
	exibir (vetor1, TAM);
}
