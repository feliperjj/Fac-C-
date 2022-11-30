/*Codificar uma função que, dando um vetor A de
inteiros, com quantA elementos, crie um novo vetor B,
com os mesmos elementos de A, porém sem repetição.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define quant 10


void exibirVetor (int vetor[], int tamanho)
{
	int i;
	
	printf ("\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}

void preencherAleatorio (int vetor[], int tamanho)
{
	int i;
	srand (time (NULL));

	for (i=0;i<tamanho;i++)
	{
		vetor[i] = 1 + rand()%10;
	}
}

void criarNovoVetor(int vetorA[], int vetorB[], int quantidade, int *tam)
{
    int i, j=0;

    for (i=0;i<quantidade;i++)
    {
        if (vetorA[i]!=vetorB[j])
        {
            vetorB[j]=vetorA[i];
            j++;
            (*tam)++;
        }
    }
}



void main ()
{
    int vetA[quant],*tam=0, vetB[*tam];

    preencherAleatorio (vetA, quant);
    exibirVetor (vetA, quant);
    criarNovoVetor (vetA, vetB, quant, &tam);
    exibirVetor (vetB, quant);

}