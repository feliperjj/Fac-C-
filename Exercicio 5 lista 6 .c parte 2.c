#include <stdio.h>

int main(){
	
	int elementos,numero,peso,i;
	float mediaPonderada=0,somaNumeros=0,peso;
	
	printf("Digite o numero de elementos");
	scanf("%d",&elementos);
	
	
	for(i=0;i<=elementos;i++){
		
		printf("Digite um numero");
		scanf("%d",&numero);
		printf("Digite o peso:");
		scanf("%d",&peso);
		
		
		somaNumeros+=(numero*peso);
		denominador+= peso;
	
		
		
		
		
	}
		mediaPonderada = somaNumeros/denominador;
	printf("A media ponderada é %.2f",mediaPonderada);
	
	
	
	
}