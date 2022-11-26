#include <stdio.h>
#define TAM 5


float ex2(float vet[],int tamanho);
int exibirVetor(float vet[],int tamanho);

int main(){
	float v1[TAM] = {5,1,5,6,4};
	float v2[10] = {9,1,3,5,4,1,2,7,5,9};

		printf("v1:\n\n");
		 exibirVetor(v1,TAM);
		 ex2(v1,TAM);
		 exibirVetor(v1,TAM);
		 
//		 \\trocando numeros do vetor 2
		 
		exibirVetor(v2,10);
		ex2(v2,10);
		 exibirVetor(v2,10);
}


float ex2(float vet[],int tamanho){
	
	
	float aux;
	int i,j;
	
	
	for(i=0,j=1;j<tamanho;i+=2,j+=2){
		
		aux=vet[i];
		vet[i]=vet[j];
		vet[j]=aux;
		
	}
}
	
	int exibirVetor(float vet[],int tamanho){
		
		int i;
		
		printf("\n Vetor: ");
		
		for (i=0;i<tamanho;i++)
		{
			
			printf("%1.f",vet[i]);
			
		}
		printf("\n \n");
	}

	
	
	
	
	
	
	
	
