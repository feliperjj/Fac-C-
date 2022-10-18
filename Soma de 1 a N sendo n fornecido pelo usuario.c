#include <stdio.h>
\*
Desenvolver um programa que calcule a
soma dos números de 1 a N, sendo N um
número inteiro fornecido pelo usuário.
*/
int main(){
	
	int n,i,soma=0;
	
	printf("Digite um numero n ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
	soma+=i;
	}
	printf("%d",soma);
	
	
	
	
	
}