#include <stdio.h>

void main (){
	
float saldo;	
	printf("Digite seu saldo medio:");
	scanf ("%f",&saldo);
	
	
	if(saldo <= 1000){
		
		printf("Nenhnum Credito:");
		
	}
	else if (saldo <= 1499.99){
		
		
		printf("20% do saldo medio");
	}
	else if(saldo <= 2499.99){
		
		printf("30% do saldo medio");
		
	}
	else{
		
		printf("40% do saldo medio");
	}
	
	
	
	
	
	
	
	
	
	
}