/*

Construir um programa que, dado um número
inteiro n fornecido pelo usuário, exiba uma
sequência de elementos, distribuídos em
linhas, como nos exemplos a seguir:
Exemplos:
N = 7
1 0 0 0 0 0 0
2 1 0 0 0 0 0
3 2 1 0 0 0 0
4 3 2 1 0 0 0
5 4 3 2 1 0 0
6 5 4 3 2 1 0
7 6 5 4 3 2 1
N = 4

1 0 0 0
2 1 0 0
3 2 1 0
4 3 2 1


*/
#include <stdio.h>

int main(){
	
	int i,j,n,k;
	
	printf("Digite um numero inteiro:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
	for(j=i;j>=1;j--){
		
		printf("%d ",j);
		
	}
	
			
			for(k=1;k<=n-i;k++){
				printf("%d ",0);
			
			}
			
		
printf("\n");
	}
}
	
	
	
	
	
	
