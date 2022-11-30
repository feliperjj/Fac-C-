#include <stdio.h>
#include <float.h>

#define quant 10

void preencherAleatorio (int vetor[], int tamanho);
void exibirVetor (int vetor[], int tamanho);
int posicoes (int v[], int tamanho, int pos1, int pos2, int *maior, int *pares, int *soma);

void main ()
{
	int v[quant], maior, pares, soma, pos1, pos2, n;
	
	printf("\n\t Digite a primeira posição: \n\t ");
	scanf("%d", &pos1);
	printf("\n\t Digite a segunda posição: \n\t ");
	scanf("%d", &pos2);
	preencherAleatorio (v, quant);
	exibirVetor (v, quant);
	n = posicoes (v, quant, pos1, pos2, &maior, &pares, &soma);
	
	if(n==0)
	{
		printf("N foi");
	}
	else
	{
	printf("\n\t O maior elemento da posicao 0 a posicao posicao %d e: %d", pos1, maior);
	printf("\n\t A quantidade de pares da posicao %d + 1 a posicao %d - 1 e: %d", pos1, pos2, pares);
	printf("\n\t A soma dos elementos da posicao %d ao final do vetor e: %d", pos2, soma);
	}

}

int posicoes (int v[], int tamanho, int pos1, int pos2, int *maior, int *pares, int *soma)
{
	int mai=FLT_MIN, par=0, som=0, i, x;
	
	if((pos1 > tamanho) || (pos2 > tamanho) || (pos1<0) || (pos2<0))
	{
		return 0;
	}
	else
	{
		for(i=0;i<=pos1;i++)
		{
			if(v[i]>mai)
			{
				mai=v[i];
			}
		}
		
		for(i=pos2;i<tamanho;i++)
		{
			som+=v[i];
		}
		if(pos1>pos2)
		{
			x = pos1;
			pos1 = pos2;
			pos2 = x;
		}
		for(i=pos1+1;i<=pos2-1;i++)
		{
			if(v[i]%2==0)
			{
				par++;
			}
		}
		*maior = mai;
		*pares = par;
		*soma = som;
		
		return 1;
	}	
}

void exibirVetor (int vetor[], int tamanho)
{
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
	int i;
	srand (time (NULL));

	for (i=0;i<tamanho;i++)
	{
		vetor[i] = 1 + rand()%10;
	}
}
