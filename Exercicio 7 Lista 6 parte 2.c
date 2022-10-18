#include <stdio.h>


int main (){
	
int i,soma,numero,menor=99999,media,somaUltimo;	
	
	for(i=0;i<=50;i++){
		printf("Digite Um Numero");
		scanf("%d",numero);
		
		soma +=numero;
	}
	for (i=50;i<=100;i++){
		printf("Digite Um Numero");
		scanf("%d",numero);
		if(numero<menor){
			
			menor = numero;
		}
		
		for (i=100;i<=150;i++){
		printf("Digite Um Numero");
		scanf("%d",numero);
		somaUltimo +=numero;
	}
		media=somaUltimo/numero;
	
	
	
	printf ("\n\nSoma dos valores do primeiro grupo: %.1f\n", soma);
	printf ("Menor elemento do segundo grupo: %.1f\n", menor);
	printf ("Media do terceiro grupo: %.1f\n", somaUltimo);
	
}