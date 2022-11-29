/*
	Fundamentos de Algoritmos de Computa��o - FAC
	Professor Leonardo Vianna
	Data: 04/11/2021

	Lista de Exerc�cios IV
	
	QUEST�O 08: Em uma empresa deseja-se fazer um levantamento sobre algumas informa��es 
	dos seus 250 funcion�rios. Cada funcion�rio dever� responder um question�rio ao qual 
	informar� os seguintes dados: matr�cula, g�nero, idade, sal�rio e tempo (em anos) de 
	trabalho na empresa. A execu��o do programa deve exibir os seguintes itens:

	a)	Quantidade de funcion�rios que ingressaram na empresa com menos de 21 anos;
	b)	Quantidade de funcion�rios do g�nero feminino;
	c)	M�dia salarial dos homens;
	d)	Matr�cula dos funcion�rios mais antigo e mais novo.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define QUANT 250

void main ()
{
	//declara��o de vari�veis
	int i, matricula, idade, tempoServico, contMenor21 = 0, contF = 0, contM = 0,
	    maiorTempoServico = 0, menorTempoServico = 100, matriculaMaiorTempoServico, 
		matriculaMenorTempoServico;
	char genero;
	float salario, somaSalHomens = 0, mediaSalHomens;
	
	//leitura dos dados de todos os funcion�rios da empresa
	for (i=1;i<=QUANT;i++)
	{
		printf ("\nMatricula: ");
		scanf ("%d", &matricula);
		
		fflush (stdin);
		printf ("Genero: ");
		scanf ("%c", &genero);
		
		printf ("Idade: ");
		scanf ("%d", &idade);
		
		printf ("Salario: ");
		scanf ("%f", &salario);

		printf ("Tempo (em anos) de servico: ");
		scanf ("%d", &tempoServico);
		
		//Quantidade de funcion�rios que ingressaram na empresa com menos de 21 anos
		if (idade - tempoServico < 21) //calculando a idade do funcion�rio ao ingressar na empresa
		{
			contMenor21++;
		}
		
		//Quantidade de funcion�rios do g�nero feminino
		if (toupper(genero) == 'F')
		{
			contF++;	//atualizando a quantidade de mulheres na empresa
		}
		else
		{
			//M�dia salarial dos homens
			somaSalHomens = somaSalHomens + salario;
			contM++;
			//mediaSalHomens = somaSalHomens/contM;  N�O DEVE SER FEITA AQUI ESTA DIVIS�O!!!
		}
		
		//Determinando a matr�cula do funcion�rio mais antigo
		if (tempoServico > maiorTempoServico)
		{
			maiorTempoServico = tempoServico;
			matriculaMaiorTempoServico = matricula;
		}
		
		//Determinando a matr�cula do funcion�rio mais novo
		if (tempoServico < menorTempoServico)
		{
			menorTempoServico = tempoServico;
			matriculaMenorTempoServico = matricula;
		}
	}
	
	//Calculando a m�dia salarial dos homens
	mediaSalHomens = somaSalHomens/contM;
	
	//exibindo os resultados
	printf ("\n\nQuantidade de funcionarios que ingressaram na empresa com menos de 21 anos: %d\n", contMenor21);
	printf ("Quantidade de funcionarios do genero feminino: %d\n", contF);
	printf ("Media salarial dos homens: R$ %.2f\n", mediaSalHomens);
	printf ("Matricula do funcionario mais antigo: %d\n", matriculaMaiorTempoServico);
	printf ("Matricula do funcionario mais novo: %d\n", matriculaMenorTempoServico);
}
