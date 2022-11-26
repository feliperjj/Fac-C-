/*
		0  1  2  3  4
vetor={45,60,30,85,02}
vetor[i]== conteudo do vetor
i		== posição do vetor
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define TAM 20
#define FALSE 0
#define TRUE 1

void preencherVetor(int vetor[], int tamanho);
void exibirVetor(int vetor[], int tamanho);
int buscarElemento(int vetor[], int tamanho, int elemento);
int alterarElemento(int vetor[], int tamanho, int elementoAntigo, int elementoNovo);
int removerElemento(int vetor[], int tamanho,int elemento);

int main(){
	int vetor[TAM], retorno;
//	srand(time(NULL));		//biblioteca time.h

	preencherVetor(vetor, TAM);
	exibirVetor(vetor, TAM);
	printf("\n\n");
	retorno= removerElemento(vetor, TAM, 7);
	exibirVetor(vetor, TAM);
	if(retorno==0){
		printf("Nao removi");
	}else{
		printf("removi  %d ocorrencias", retorno);
	}
	
}
void preencherVetor(int vetor[], int tamanho){	//aleatoria
	int i;
	for(i=0;i<tamanho;i++){
		vetor[i]=rand()%10;	//dentro da biblioteca stdlib.h
	}
}
void exibirVetor(int vetor[], int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		printf("vetor[%d] = %d\n", i, vetor[i]);
	}
}
int buscarElemento(int vetor[], int tamanho, int elemento){
	int i, cont=0;
	for(i=0;i<tamanho;i++){
		if(vetor[i]==elemento){
			cont++;
		}
	}
	return cont;
}
int alterarElemento(int vetor[], int tamanho,int elementoAntigo,int elementoNovo){
	int i, cont=0;
	for(i=0;i<tamanho;i++){
		if(vetor[i]==elementoAntigo){
			vetor[i]=elementoNovo;
			cont++;
		}
	}
	return cont;
}
int removerElemento(int vetor[], int tamanho,int elemento){
	int i, cont=0, j;
	for(i=0;i<tamanho;i++){
		if(vetor[i]==elemento){
			for(j=i;j<tamanho;j++){
				vetor[j]=vetor[j+1];
			}
			cont++;	
		}
	}
	return cont;
}

