/*
	FAETERJ - Rio
	FAC - 2021/2
	Professor Leonardo Vianna
	
	Data: 09/12/2021
	
	Lista de Exerc�cios X (Fun��es)

	QUEST�O 02:
	Dados dois n�meros inteiros A e B, fazer uma fun��o que determine o n�mero de 
	pot�ncias de 2 existentes no intervalo definido pelos dois valores, assim como a 
	maior delas.
	
	Exemplos:
	
		A: 10
		B: 100	
		
		Pot�ncias de 2: 16 32 64
					retornar: 3 (n�mero de pot�ncias no intervalo) e 64 (maior pot�ncia 
					no intervalo).
*/

//importa��o de bibliotecas
#include <stdio.h>

//fun��o potencias2
void potencias2 (int A, int B, int *numPotencias, int *maiorPotencia)
{
	//declara��o de vari�veis
	int pot = 1, cont = 0;
	
	//calculando todas as pot�ncias menores ou iguais a 'B'
	while (pot <= B)
	{
		//por�m, s� contando aquelas que forem superiores ou iguais a 'A'
		if (pot >= A)
		{
			cont++;
			
			//armazenando a pot�ncia do intervalo no par�metro 'maiorPotencia'
			*maiorPotencia = pot;
		}
		
		//atualizando para a pr�xima pot�ncia de 2
		pot *= 2;  //pot = pot * 2;
	}
	
	//atribuindo a quantidade de pot�ncias do intervalo ao par�metro 'numPotencias'
	*numPotencias = cont;	
}

void main ()
{
	//declara��o de var�veis
	int numero1, numero2, quant, maior;
	
	//lendo os valores que representam o intervalo
	printf ("Entre com os valores que representam o intervalo: ");
	scanf ("%d %d", &numero1, &numero2);
	
	//chamando a fun��o
	potencias2 (numero1, numero2, &quant, &maior);
	
	//exibindo os resultados
	printf ("\n\nNumero de potencias: %d\n", quant);
	printf ("Maior potencia do intervalo: %d", maior);
}
