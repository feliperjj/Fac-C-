/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 04/11/2021

	Lista de Exerc�cios V
	
	QUEST�O 01:
	Dado um n�mero inteiro N, fazer um programa que exiba os n�meros pares iguais ou 
	inferiores a N. 
	
	Exemplos: 
	
		N = 15		0, 2, 4, 6, 8, 10, 12, 14
		
		N = 8		0, 2, 4, 6, 8
*/

//importa��o de bibliotecas
#include <stdio.h>

void main ()
{
	//declara��o de vari�veis
	int i, n;
	
	//leitura do valor
	printf ("Entre com um numero: ");
	scanf ("%d", &n);
	
	//variando todos os valores de 0 ao n
	for (i=0;i<=n;i++)
	{
		//verificando se o valor � par
		if (i%2==0)
		{
			printf ("%d ", i);
		}
	}
}
