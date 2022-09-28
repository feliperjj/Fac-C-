#include <stdio.h>

int main(){
	
	
	 int limit,n,maior=0,i,media,soma=0;
	printf("digite quantos numeros serao digitados:");
	scanf("%d",&limit);
	
	for(i=0;i<limit; i++){
		
		printf("Digite n:");
		scanf("%d",&n);
		if(n < 0){
			
		printf("Digite um numero positivo:");
		scanf("%d",&n);
		}if(n > maior){
				
			maior = n;
		}
		
		
	}
	soma += n;
	media = soma/limit;
	
	printf("O maior valor positivo e: %d \n",maior);
	printf("A media dos valores informados %d \n",media);
	
	
	
	
	
	
}