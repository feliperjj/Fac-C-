
	
	
	
	
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int x, i, contG/* = 0*/, contNG/* = 0*/, contM = 0, contF = 0, contMG = 0, contFG = 0;
	char opiniao, genero;
	float percMG, percFG;
	
	//obtendo o numero de entrevistados
	printf ("Numero de pessoas entrevistadas: ");
	scanf ("%d", &x);
	
	//lendo os dados das 'x' pessoas entrevistadas
	for (i=1;i<=x;i++)
	{
		//lendo o genero do entrevistado
		printf ("Genero [M/F]: ");
		fflush (stdin);
		scanf ("%c", &genero);
		genero = toupper (genero);
		
		//lendo a opiniao do entrevistado
		printf ("Opiniao [(G)ostou/(N)ao gostou]: ");
		fflush (stdin);
		scanf ("%c", &opiniao);
		opiniao = toupper (opiniao);
		
		/*
		eliminando este bloco de código, pois à frente teremos os números de homens e de
		mulheres que gostaram do produto.
		
		//verificando se a pessoa gostou do produto
		if (opiniao == 'G')
		{
			contG++;		//atualizando a quantidade de pessoas que gostaram do produto
		}
		else
		{
			contNG++;		//atualizando a quantidade de pessoas que não gostaram do produto
		}
		*/
		
		//verificando se é do genero masculino
		if (genero == 'M')
		{
			//atualizando o número de homens entrevistados
			contM++;
			
			//verificando se o homem gostou do produto
			if (opiniao == 'G')
			{
				//atualizando o número de homens que gostaram do produto
				contMG++;
			}
		}
		else
		{
			//atualizando o número de mulheres entrevistadas
			contF++;
			
			//verificando se a mulher gostou do produto
			if (opiniao == 'G')
			{
				//atualizando o número de mulheres que gostaram do produto
				contFG++;
			}
		}
	}
	
	//definindo o número de pessoas que gostaram do produto
	contG = contMG + contFG;
	
	//definindo o número de pessoas que não gostaram do produto
	contNG = x - contG;
	
	//calculando os percentuais de homens e mulheres que gostaram do produto
	percMG = (float)contMG/contM;		//casting
	percFG = (float)contFG/contF;		//casting
		
	//exibindo os resultados
	printf ("\nNumero de pessoas que gostaram do produto: %d", contG);
	printf ("\nNumero de pessoas que nao gostaram do produto: %d", contNG);
	
	if (percMG > percFG)
	{
		printf ("\nHouve maior aceitacao do produto entre os homens.");
	}
	else
	{
		if (percFG > percMG)
		{
			printf ("\nHouve maior aceitacao do produto entre as mulheres.");
		}
		else
		{
			printf ("\nHouve a mesma aceitacao do produto entre os generos.");
		}
	}
}