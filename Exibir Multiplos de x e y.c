\*Faça um programa que leia um
número inteiro positivo N e exiba todos os
múltiplos de Y inferiores a N, onde N e Y são
fornecidos pelo usuário.      */
#include <stdio.h>

int main(){
	
	
	
	int x,y,i=0;
	
	printf("Digite x:");
	scanf("%d",&x);
	
	printf("Digite y:");
	scanf("%d",&y);
	
for(i=0;i<x;i++){
			
			if(i%y==0){
					
				printf("%d \n",i);
			
		
			}
				
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
