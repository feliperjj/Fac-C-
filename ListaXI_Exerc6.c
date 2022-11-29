/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 16/12/2021
	
	Lista de Exerc�cios XI (Vetores)

	QUEST�O 06:
	Fa�a uma fun��o que, dado um vetor de reais, altere todas as ocorr�ncias do n�mero 
	A pelo n�mero B.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 100

//declara��o dos prot�tipos das fun��es
int alterar (float vetor[], int tamanho, float A, float B);

void exibir (float v[], int tamanho);
void preencherAleatorio (float v[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	float vetor[TAM];
	float num1, num2;
	int contador;
		
	//preenchendo o vetor com valores aleat�rios
	preencherAleatorio (vetor, TAM);
	
	//exibindo o vetor
	exibir (vetor, TAM);	
	
	//lendo os valores a serem trocados
	printf ("Qual numero sera trocado? ");
	scanf ("%f", &num1);
	
	printf ("Por qual valor sera alterado? ");
	scanf ("%f", &num2);
	
	//chamando a fun��o de altera��o
	contador = alterar (vetor, TAM, num1, num2);	
	
	//testando o retorno
	if (contador == 0)
	{
		printf ("\n\nNenhuma alteracao foi realizada! O valor %.1f n�o esta no vetor.", num1);
	}
	else
	{
		printf ("\n\nAlteracao realizada!\n");
		
		//exibindo o vetor ap�s a altera��o
		exibir (vetor, TAM);
	}
}

//implementa��o das fun��es

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

int alterar (float vetor[], int tamanho, float A, float B)
{
	//declara��o de vari�veis
	int i, cont = 0;
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando se o elemento da posi��o 'i' � o n�mero 'A'
		if (vetor[i] == A)
		{
			vetor[i] = B;	//procedendo com a altera��o de 'A' por 'B'
			cont++;			//contando o n�meros de altera��es
		}
	}
	
	//retornando a quantidade de altera��es realizadas
	return cont;
}
