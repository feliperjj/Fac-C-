#include <stdio.h>

void main (){
	
float saldo,credito;	
	printf("Digite seu saldo medio:");
	scanf ("%f",&saldo);
	
	
	if(saldo <= 1000){
		
		printf("Nenhnum Credito:");
		
	}
	else if (saldo <= 1499.99){
		
		credito = (0.2/100)*saldo;
		printf("20% do saldo medio: %d",credito);
		
	}
	else if(saldo <= 2499.99){
		credito = (0.3/100)*saldo;
		printf("30% do saldo medio:  %d",credito");
		
	}
	else{
		credito = (0.4/100)*saldo;
		printf("40% do saldo medio:  %d",credito");
	}
	
	
	
	
	
	
	
	
	
	
}
