\*Dado um número inteiro N, fazer um
programa que exiba os números pares
iguais ou inferiores a N.*/
#include <stdio.h>


int main(){
	
	
	
	int  i,j=50,soma=0;
	
	for(i=1;i<=j;i++){
		
		printf("%d,%d",i,j);
			soma=soma+i+j;

		j--;
	}

	
		printf("A soma: %d",soma);
	
	
	
}