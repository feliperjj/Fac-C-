/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 09/12/2021
	
	Lista de Exerc�cios XI (Vetores)

	QUEST�O 04:
	Fazer uma fun��o que armazene em um vetor os 50 primeiros termos da seguinte 
	sequ�ncia:

				S = 1, 2, 4, 7, 11, 16, ...

	Nota: observem que a diferen�a entre o 1� e 2� elementos � igual a 1, entre o 2� e 
	3� � igual a 2, entre o 3� e o 4� � igual a 3, e assim sucessivamente.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 50

//declara��o dos prot�tipos das fun��es
void sequencia (int v[], int tamanho);
void exibir (int v[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	int vetor[TAM];
		
	//chamando a fun��o para preencher o vetor conforme o enunciado
	sequencia (vetor, TAM);
	
	//exibindo os elementos do vetor
	exibir (vetor, TAM);	
}

//implementa��o das fun��es

//fun��o exibir
void exibir (int v[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	//exibindo os elementos do vetor
	printf ("\nElementos do vetor: ");
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", v[i]);
	}
	printf ("\n\n");
}

void sequencia (int v[], int tamanho)
{
	//declara��o de vari�veis
	int i, razao = 1;
	
	//inicializando o primeiro elemento da sequ�ncia
	v[0] = 1;
	
	//calculando e armazenando os demais elementos da sequ�ncia
	for (i=1;i<tamanho;i++)
	{
		v[i] = v[i-1] + razao;
		razao++;
	}
}
