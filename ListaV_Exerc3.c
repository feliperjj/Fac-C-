/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 04/11/2021

	Lista de Exerc�cios V
	
	QUEST�O 03:
	Fazer um programa que exiba todos os divisores de um n�mero fornecido pelo usu�rio. 
	
	Exemplos:
	
		numero: 10			Divisores: 1  2  5  10
		numero: 2			Divisores: 1  2
		numero: 1			Divisores: 1
*/

//importa��o de bibliotecas
#include <stdio.h>

void main ()
{
	//declara��o de vari�veis
	int i, n;
	
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

	//variando os valores de 1 at� n
	for(i=1;i<=n;i++)	
	{
		//verificando se i � divisor de n
		if (n%i==0)
		{
			printf ("%d ", i);
		}
	}
}
