/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 02/12/2021
	
	Par�metros de sa�da x par�metros de entrada	
	
	Observa��o: nesta vers�o, os par�metros s�o passados por refer�ncia; portanto, os 
	valores de 'x' e 'y' na 'main' s�o alterados.
*/

//importa��o de bibliotecas
#include <stdio.h>

//fun��o

//'a' � ponteiro para inteiro; 'b' � ponteiro para real. Ponteiro = endere�o de mem�ria.
//Portanto, 'a' e 'b' armazenar�o endere�os de mem�ria nos quais valores inteiro e float,
//respectivamente, s�o encontrados.
void funcao (int *a, float *b)
{
	(*a)++;		//l�-se: incrementar o conte�do do endere�o armazenado em 'a'
	*b = ((*b)-(*a))/2;
}

//main
void main ()
{
	//declara��o de vari�veis
	int x = 10;
	float y = 15.6;
	
	//exibindo os valores de 'x' e 'y' antes da chamada � fun��o
	printf ("\nx = %d   -   y = %.1f\n", x, y);
	
	//chamando a fun��o
	funcao (&x, &y);
	
	//exibindo os valores de 'x' e 'y' ap�s a chamada � fun��o
	printf ("\nx = %d   -   y = %.1f\n", x, y);
}
