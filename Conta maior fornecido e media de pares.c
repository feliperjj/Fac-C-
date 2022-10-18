#include <stdio.h>


int main(){
	
	int i,maiorPar=0,contPar,mediaPar,numero,somaPar;
	
	
	
for (i=0;i<=10;i++){
	
	printf ("%do. valor: ", i);
	scanf ("%d", &numero);
		if(i%2==0){
			
			
			
			if(numero>maiorPar){
				
			maiorPar=numero;	
				
			}
			if(numero%2==0)
			{
				somaPar+=numero;	
				contpar++	;	
			}	
		
	
}	
	
	
}
	mediaPar=somaPar/contPar;
	
	printf("O maior numero par fornecido e: %d",maior);
	printf("A media de pares e: %d:",pares)
	
	
}