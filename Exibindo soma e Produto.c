#include <stdio.h>


int main (){
	
	int cont,num,produto=1,soma=0,i;
	printf("Quantidade de numeros que serao digitados");
	scanf("%d",&cont);
	for(i=0;i<cont;i++){
		
		printf("Digite um num inteiro positivo");
		scanf("%d",&num);
		
		if(num%2!=0){
			
			produto = produto * num;
		}else if(num%2 ==0){
			
			soma = soma+num;
		}
	}
	printf("A soma e: %d ",soma);
	printf("O produto e: %d ",produto);
	
	
	
	
	
	
	
}