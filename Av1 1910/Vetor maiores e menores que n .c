#include <stdio.h>

#define TAM 20
#include<time.h>
#include<stdlib.h>

void preencherAleatorio (int vetor[],int tamanho);
void exibirVetor (int vetor[], int tamanho);
void ex05(int vetor[],int tamanho);

int main (){
	int vet[TAM],maior=0,menor=0;
	preencherAleatorio(vet,TAM);
	exibirVetor(vet,TAM);

	ex05(vet,TAM);
	
}


void ex05(int vetor[],int tamanho){
	
	
	
	
	int i,n,maior=0,menor=0;
	printf("Digite n: \n",n);
	scanf("%d",&n);

	 for (i = 0; i < TAM; i++)
    {
        if (vetor[i] > n)
        {
            maior++;
        }
        else if (vetor[i] < n)
        {
            menor++;
        }
    }
    
    	printf("Maior: %d ",maior);
    	printf("Menor: %d ", menor);    
}
		
		
	
	
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

void preencherAleatorio (int vetor[], int tamanho)
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
	
	
	
	
	
	
