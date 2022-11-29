/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 04/11/2021

	Lista de Exerc�cios V
	
	QUEST�O 02:
	Desenvolver um programa que calcule a soma dos n�meros de 1 a N, sendo N um n�mero 
	inteiro fornecido pelo usu�rio.
*/

//importa��o de bibliotecas
#include <stdio.h>

void main ()
{
	//declara��o de vari�veis
	int i, n, soma = 0;
	
	do
	{
		//leitura do valor, validando se o n�mero � positivo
		printf ("Entre com um numero positivo: ");
		scanf ("%d", &n);
		
		if (n <= 0)
		{
			printf ("\nNumero invalido, pois deve ser positivo. Tente novamente.\n");
		}
	}
	while (n <= 0);

	//somando os valores de 1 at� n
	for(i=1;i<=n;i++)	
	{
		soma = soma + i;  // soma += i;
	}
	
	//exibindo o valor da soma
	printf ("\nSoma = %d", soma);
}
