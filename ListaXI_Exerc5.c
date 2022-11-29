/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 16/12/2021
	
	Lista de Exerc�cios XI (Vetores)

	QUEST�O 05:
	Elaborar uma fun��o que, dado um conjunto de 300 valores inteiros, distribua-os 
	em 2 vetores conforme forem pares ou �mpares.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 300

//declara��o dos prot�tipos das fun��es
void decomporVetor (int vetor[], int quantidade, int pares[], int *quantP, int impares[], int *quantI);

void exibir (int v[], int tamanho);
void preencherAleatorio (int v[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	int vet[TAM], vetP[TAM], vetI[TAM];
	int contP, contI;
	
	//preenchendo o vetor original com valores aleat�rios
	preencherAleatorio (vet, TAM);
	
	//chamando a fun��o para separar os valores pares e �mpares nos respectivos vetores
	decomporVetor (vet, TAM, vetP, &contP, vetI, &contI);
	
	//exibindo os vetores
	printf ("Vetor original:\n");
	exibir (vet, TAM);	//vetor original
	
	printf ("Vetor de pares:\n");
	exibir (vetP, contP);
	
	printf ("Vetor de impares:\n");
	exibir (vetI, contI);
	
}

//implementa��o das fun��es

//fun��o exibir
void exibir (int v[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	//exibindo os elementos do vetor
	//printf ("\nElementos do vetor: ");
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", v[i]);
	}
	printf ("\n\n");
}

void preencherAleatorio (int v[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	srand (time(NULL));
	
	for (i=0;i<tamanho;i++)
	{
		v[i] = 1 + rand()%100;  //gerando n�meros aleat�rios no intervalo de 1 a 100
	}
}

void decomporVetor (int vetor[], int quantidade, int pares[], int *quantP, int impares[], int *quantI)
{
	//declara��o de vari�veis
	int i, j, k;
	
	//percorrendo o vetor original
	for (i=0, j=0, k=0;i<quantidade;i++)
	{
		//verificando se cada elemento do vetor � par ou �mpar
		if (vetor[i] % 2 == 0)
		{
			//armazenar o elemento vetor[i] no vetor de pares
			pares[j] = vetor[i];	//'j' est� indexando o vetor de pares
			j++;
		}
		else
		{
			//armazenar o elemento vetor[i] no vetor de �mpares
			impares[k] = vetor[i];	//'k' est� indexando o vetor de impares
			k++;
		}
	}
	
	//armazenando nos par�metros 'quantP' e 'quantI' o total de pares e de �mpares
	*quantP = j;
	*quantI = k;
}
