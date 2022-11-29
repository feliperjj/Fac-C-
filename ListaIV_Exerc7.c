/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 04/11/2021

	Lista de Exerc�cios IV
	
	QUEST�O 07: Uma determinada empresa fez uma pesquisa de mercado para saber se as 
	pessoas gostaram ou n�o de um novo produto que foi lan�ado. Para cada pessoa 
	entrevistada foram coletados os seguintes dados: g�nero (M ou F) e resposta 
	(G [Gostou] ou N [N�o Gostou]). Sabendo-se que foram entrevistadas X pessoas, fa�a 
	um programa que forne�a:

	a)	N�mero de pessoas que gostaram do produto;
	b)	N�mero de pessoas que n�o gostaram do produto;
	c)	Informa��o dizendo em que g�nero o produto teve uma melhor aceita��o.
*/

//importa��o de bibliotecas
#include <stdio.h>

void main ()
{
	//declara��o de vari�veis
	int x, 				//quantidade de entrevistados
		i, 				//contador do for
		contM = 0, 		//quantidade de homens entrevistados
		contF = 0, 		//quantidade de mulheres entrevistadas
		contMG = 0, 	//quantidade de homens entrevistados que gostaram do produto
		contFG = 0,		//quantidade de mulheres entrevistadas que gostaram do produto
		contG,			//quantidade de entrevistados que gostaram do produto
		contNG;			//quantidade de entrevistados que n�o gostaram do produto
	char genero, 		//g�nero de cada entrevistado
		 opiniao;		//opini�o de cada entrevistado
	float percM,		//percentual de homens que gostaram do produto
	      percF;		//percentual de mulheres que gostaram do produto

	//leitura do n�mero de entrevistados
	printf ("Quantas pessoas foram entrevistadas? ");
	scanf ("%d", &x);
	
	//lendo as informa��es das x pessoas entrevistadas
	for (i=1;i<=x;i++)
	{
		//leitura do g�nero
		printf ("Genero [M/F]: ");
		fflush (stdin);
		scanf ("%c", &genero);
		
		//leitura da opini�o
		printf ("Opiniao sobre o produto [G - Gostou / N - Nao Gostou]: ");
		fflush (stdin);
		scanf ("%c", &opiniao);
		
		//verificando o g�nero do entrevistado
		if (toupper(genero) == 'M')
		{
			//atualizando a quantidade de homens
			contM++;
			
			//verificando se o homem gostou do produto
			if (toupper(opiniao) == 'G')
			{
				contMG++;
			}
		}
		else
		{
			//atualizando a quantidade de mulheres
			contF++;
			
			//verificando se a mulher gostou do produto
			if (toupper(opiniao) == 'G')
			{
				contFG++;
			}
		}		
	}
	
	//calculando a quantidade de pessoas que gostaram e n�o gostaram do produto
	contG = contMG + contFG;
	contNG = x - contG;
	
	//exibindo a quantidade de pessoas que gostaram e n�o gostaram do produto
	printf ("\n\nNumero de pessoas que gostaram do produto: %d\n", contG);
	printf ("Numero de pessoas que nao gostaram do produto: %d\n", contNG);
	
	//calculando os percentuais de homens e mulheres que gostaram do produto
	percM = ((float)contMG/contM) * 100;		//casting
	percF = ((float)contFG/contF) * 100;		//casting
	
	//determinando em que g�nero houve maior aceita��o
	if (percF > percM)
	{
		printf ("\nHouve maior aceitacao entre as mulheres (%.2f %%).", percF);
	}
	else
	{
		if (percM > percF)
		{
			printf ("\nHouve maior aceitacao entre os homens (%.2f %%).", percM);
		}
		else
		{
			printf ("\nHouve a mesma aceitacao entre homens e mulheres (%.2f %%).", percF);
		}
	}
}
