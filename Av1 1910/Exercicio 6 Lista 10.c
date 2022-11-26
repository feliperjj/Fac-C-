#include <stdio.h>
#define TAM 10
int troca(int vet[],int a,int b)
void exibir(int vet[],int tamanho);
void preencherAleatorio (int vetor[], int tamanho)

int main(){
	
	int v[TAM];
	int valor1,valor2;
	preencherAleatorio (v, TAM);
	exibir(v,TAM);
	
	printf("Entre com o valor a ser alterado:");
	scanfd("%d",valor1);
	printf("Entre com o novo valor:");
	scanfd("%d",valor2);
	troca(v,TAM,valor1,valor2);
	
	exibir(v,TAM);
}


int troca(int vet[],int a,int b){
	
	for(i=0;i<tamanho;i++){
		
		if(vet[i]==a){
			
			vetor[i]=b;
		}
		
	}
	
	
}

void exibir (int vet[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\n\nElementos do vetor: ");
	
	//varrendo o vetor
	for (i=0;i<tamanho;i++)	
	{
		printf ("%d ", vet[i],bet[i]);
	}
	
	printf ("\n\n");
	
	
	
}
	
	void preencherAleatorio (int vet[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//garantindo que as sequências serão distintas a cada execução
	srand (time(NULL));

	//varrendo o vetor
	for (i=0;i<tamanho;i++)	
	{
		vetor[i] = rand ()%30;
	}	