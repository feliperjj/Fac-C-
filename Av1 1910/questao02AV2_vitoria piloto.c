//Desenvolver uma função que exiba os n primeiros
//múltiplos comuns dos valores inteiros A e B.
//Exemplo 1:
//A = 10 B = 5 n = 4
//Saída: 0 10 20 30
//Exemplo 2:
//A = 4 B = 6 n = 5
//Saída: 0 12 24 36 48

#include <stdio.h>

int main (){
	int n, a, b;
	printf("Insira a quantidade de elementos que deseja saber os multiplos comus: ");
	scanf("%d",&n);
	printf("Insira um numero: ");
	scanf("%d",&a);
	printf("Insira o segundo numero: ");
	scanf("%d",&b);
	exibeCalculaMultiplos(n,a,b);
}


void exibeCalculaMultiplos (int quant, int a, int b){
	int vet[a], i, produto;
	produto = a*b;
    for (i=0;i<=produto;i++)
    {
        if ((i % a == 0) && (i % b == 0))
        {
            vet[i]=i;
            printf("%d  ", vet[i]);
        }
    }


}


