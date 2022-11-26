#include <stdio.h>
#define TAM 5


int ex1(int vet[TAM],int x);

int main(){
	
	int vet[TAM] = {5,1,5,6,4};
	int quant,valor;
	

	
	printf("Entre com o valor a ser buscado");
	scanf("%d",&valor);
	
		quant = ex1(vet,valor);
		printf ("\n\nForam encontradas %d ocorrencias de %d no vetor.", quant, valor);
			
}


int ex1(int vet[TAM],int x){
	
	
	int cont;
	int i;
	
	
	
	for(i=0;i<=TAM;i++){
		if(vet[i]==x){
			
			cont++;
			
		}
		
		return cont;
	}
	
	
	
	
	
	
	
	
	
}