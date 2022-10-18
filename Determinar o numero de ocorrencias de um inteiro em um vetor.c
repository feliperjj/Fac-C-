/*Desenvolver uma função que determine o
número de ocorrências de um número inteiro x
em um vetor A.*/

#include <stdio.h>
#define TAM 30

int questao01(int vetor[],int tamanho;int numero);
void exibir (int vetor[],int tamanho[]);
void preencherAleatorio (int vetor[],int tamanho);

{
	
	
	//declaração de variaveis
	int i,cont=0;
	
	//percorrendo vetor
	for (i=0;i<tamanho;i++)
	{
		
		if (vetor[i]= valor)
		{
			cont++;
		}
	}
	//retornando a quantidade de ocorrências
	return cont;
}

void exibir (int vetor[],int tamanho[]);
{
	
	int i
	//mudando a sequencia
	srand(time(NULL));
	printf("Elementos do vetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf("%d",vetor[i]);
	}
}
void preencherAleatorio (int vetor[],int tamanho);
{
	
		int i;
	printf("Elementos do vetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		vetor[i]= rand ()%30;
	}
}

void main ()

{
	
	int v [TAM];
	int valor;
	
	preencherAleatorio(v,TAM;)
	exibir (v,TAM);
	
	printf("Entre com o valor a ser buscado");
	scanf("%d",&numero);
	questao01(int vetor[],int tamanho;int numero);
	printf("Quantidade de numeros igual exibidos: %d",&cont);
	
	
	
	
	
	
	
}
