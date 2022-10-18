#include <stdio.h>
#include <limits.h>

int main(){
	
	int valor,i,maior=INT_MIN,menor=INT_MAX,numero;
	printf("Quantos valores v oce quer ler?");
	scanf("%d",&valor);
	
	for(i=1;i<=valor;i++){
		
		printf(" $do.valor:",i);
		scanf("%d",&numero);
		if(numero > maior){
			
			
			
			maior = numero;
		}if(numero < menor){
			
			menor = numero;
			
		}
						
		} 
		
	
		
		
		
	
	printf("O maior digitado foi %d \n ",maior);
	printf("O menor digitado foi %d \n",menor);
	
	
	
}