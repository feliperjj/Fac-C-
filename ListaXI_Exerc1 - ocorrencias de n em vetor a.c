/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 09/12/2021
	
	Lista de Exerc�cios XI (Vetores)

	QUEST�O 01:
	Desenvolver uma fun��o que determine o n�mero de ocorr�ncias de um n�mero inteiro x 
	em um vetor A.
	
	Exemplo:
	
			vetor A: 1  9  4  3  1  5  6  7  1  5  4  8 
			x: 1
			
				retornar� 3	
*/

//importa��o de bibliotecas
#include <stdio.h>

//fun��o numOcorrencias
int numOcorrencias (int x, int A[], int tamanho)
{
	//declara��o de vari�veis
	int i, cont = 0;
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando se o elemento da posi��o 'i' � o valor sendo buscado
		if (A[i] == x)
		{
			cont++;
		}
	}
	
	//retornando a quantidade de ocorr�ncias
	return cont;
}

//main
void main ()
{
	//declara��o de vari�veis
	int vetor1[10] = {5,1,2,6,4,7,1,2,6,5};	//declarando dois vetores e inicializando-os com valores quaisquer
	int vetor2[5] = {5,2,2,3,2};
	int valor = 2, quant;
	
	//chamando a fun��o para o vetor1
	quant = numOcorrencias (valor, vetor1, 10);
	
	//exibindo o resultado
	printf ("\nO numero %d foi encontrado %d vezes no vetor 1", valor, quant);
	
	//chamando a fun��o para o vetor2
	quant = numOcorrencias (valor, vetor2, 5);
	
	//exibindo o resultado
	printf ("\n\nO numero %d foi encontrado %d vezes no vetor 2", valor, quant);	
}
