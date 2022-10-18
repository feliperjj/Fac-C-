Pede-se a implementação de uma função que,
dado um vetor contendo números reais,
determine se o mesmo encontra-se ordenado
de forma crescente.*/
#include <stdio.h>
#define TAM 9
#define TRUE 1
#define False 0

 int questao 03 (int vetor[],int tamanho);
 void exibir (int vetor[],int tamanho);
void preencherAleatorio (int vetor[],int tamanho);
 {
 	//declaração de variaveis
 	int i,j;
 	
 	for(i=0,j=i;j<tamanho;i++,j++)
 	{
 		
 		if (vetor[i]<= vetor [j])
 		{
 			return FALSE;
		 }
		 
 		
	 }
 	return TRUE;
 	
 	
 }
 
 void exibir (int vetor[],int tamanho[])
 {
 		//declaração de variaveis
 		int i
	//mudando a sequencia
	srand(time(NULL));
	printf("Elementos do vetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf("%d",vetor[i]);
	}
 }
void preencherAleatorio (int vetor[],int tamanho)
{
		//declaração de variaveis
		int i;
	printf("Elementos do vetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		vetor[i]= rand ()%30;
	}
}

void main ()

{
	
	int v [TAM];
	int v2[5]={1,4,6,7,9}
	
	preencherAleatorio(v,TAM;)
	exibir (v,TAM);
	exibir (v2,5)
	
	if (questao03 (v,TAM)==TRUE)
	{
		printf("O valor está Ordenado!!");
		
	}
	else
	{
	
	printf("O vetor Não está ordenado");
    }
    	if (questao03 (v,5)==TRUE)
	{
		printf("O valor está Ordenado!!");
		
	}
	else
	{
	
	printf("O vetor Não está ordenado");
    }
    
      
    
}
