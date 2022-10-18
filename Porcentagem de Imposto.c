#include <stdio.h>

int main (){
	
	
	int custo,soma,distribuidor,imposto;
	
	
	printf("Digite o custo de Fabrica: ");
	scanf("%d",&custo);
	
	
	printf("Digite a porcentagem do distribuidor: ");
	scanf("%d",&distribuidor);
	
	printf("Digite a porcentagem do imposto:");
	scanf("%d",&imposto);
	
	distribuidor = distribuidor*(custo/100);
	imposto = imposto*(custo/100);
	soma = custo + distribuidor+imposto;
	
	printf("O Custo ao consumidor e de : %d ",soma);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}