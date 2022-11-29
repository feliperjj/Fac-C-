//Implementar uma função com a seguinte assinatura e
//objetivo:
//void questao04 (float v[], int quant, int pos);
//onde:
//v: vetor de reais;
//quant: quantidade de elementos no vetor v;
//pos: uma posição qualquer do vetor.
//Objetivo da função:
//▪ encontrar o menor elemento do vetor da posição
//pos ao final e identificar a sua posição p;
//▪ caso p seja diferente de pos, trocar os conteúdos
//destas duas posições.


#include <stdio.h>
#define TAM 100
int main(){
	float vetor[TAM];
	int quant, posicao;
	printf("Insira a quantidade de elementos do vetor [ate 100]: ");
	scanf("%d",&quant);
	printf("Insira a posicao desejada para varrer o vetor: ");
	scanf("%d",&posicao);
	preencherAleatorio (vetor,quant);
	printf ("\nElementos do vetor principal: \n");
	exibir (vetor, quant);
	questao04(vetor, quant, posicao);
	printf ("\nElementos do vetor alterado: \n");
	exibir (vetor, quant);
}

void questao04(float vet[], int quant, int pos){
	int i, j, menor=9999, p;
	for (i=0;i<quant;i++){
			if (vet[i]<menor){
				menor=vet[i];
				p=i;
				if (pos!=p){
					vet[pos]=vet[i];
				}
			}
	}
}

void preencherAleatorio (float vetorA[], int tamanho){
	int i;
	srand (time(NULL));
	for (i=0;i<tamanho;i++){
		vetorA[i] = 1 + rand()%10;
	}
}

void exibir (float vet[], int n){
	int i;
	for (i=0;i<n;i++){
    printf ("%.1f ", vet[i]);
}
}

