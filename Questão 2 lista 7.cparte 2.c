#include <stdio.h>

int main(){
	
float prod,i,m,c;
int anos=0;


	printf("Qual foi a producao anual");
	scanf("%f",&m);
	printf("Entre com a taxa de crescimento anual");
	scanf("%d",&c);
	
	prod = m;
	
	
	while (prod<2*m)
	{
		
		prod+= (c/100)*prod;
		anos++;
		}	
	
	
	
	printf ("Foram necessarios %d anos para a producao duplicar (%.1f --> %.1f)\n", anos, m, prod);
	
	
	
	
}