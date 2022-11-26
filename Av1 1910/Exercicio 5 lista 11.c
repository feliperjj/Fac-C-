#include <stdio.h>
#define TAM 50


void exibir(int vet[],int tamanho);
void ex5(int vet[],int tamanho,int vetpar[],int *tamPar,int vetImpar[],int *tamImpar);

int main(){
  int v[TAM];
  int c [TAM];

//chamando a função
	ex2(v, TAM);

	//exibindo o vetor v
	exibir (v, TAM);
	exibir (c, TAM);
		 

}

void ex5(int vet[],int tamanho,int vetpar[],int *tamPar,int vetImpar[],int *tamImpar){


int i, j = 0,k=0;
		
	//preenchendo as demais posições do vetor
	for (i=1;i<tamanho;i++)
	{
		if(vet[i]%2==0)
			
		vetPar[j] = vet[i];
		j++;
		}else{
		vetImpar[k] = vet[i];
		k++;
			
		}
	}
	
	//armazenando nos parâmetros tamPar e tamImpar a quantidade de pares e impares, respectivamente
	*tamPar = j;
	*tamImpar = k;
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
	