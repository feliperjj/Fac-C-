#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define TAM 10
float preencherAleatorio (int vetor[],int tamanho);
void exibirVetor (int vetor[], int tamanho);
float crescente(int vetor[],int tamanho);

void main ()
{
	//declaração de variáveis
	int vet[TAM];
	int v1[TAM] = {1,2,3,4,5,6,7,8,8,9};
//	int v1[TAM];
	//preenchendo 'vet' com números aleatórios
	preencherAleatorio (vet, TAM);
	
	//exibindo o vetor gerado
	exibirVetor (vet, TAM);
	if(crescente(v1,TAM)==TRUE){
		printf("Vetor ordenado");
	}else{
		
		printf("Vetor nao esta ordenado");
	}
}

float crescente(int vetor[],int tamanho){
	
	int i;
	
	for (i=0;i<=tamanho-1;i++){
		
		if(vetor[i]>vetor[i+1]){
			
			return FALSE;
			
		}
		
	}
		return TRUE;
	
}









//implementação das funções
void exibirVetor (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}

float preencherAleatorio (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//para garantir que as sequências geradas serão diferentes
	srand (time (NULL));  //seed - semente
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		vetor[i] = 1 + rand()%10;
	}
}