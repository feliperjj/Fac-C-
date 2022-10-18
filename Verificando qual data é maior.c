#include <stdio.h>

int main(){
	
	int dia,mes,ano,dia2,mes2,ano2;
	
	printf("Digite data 1");
	scanf("%d",&dia);
	printf("Digite o mes 2:");
	scanf("%d",&mes);
	printf("Digite o ano 2:");
	scanf("%d",&ano);
	printf("Digite dia 2");
	scanf("%d",&dia2);
	printf("Digite o mes 2:");
	scanf("%d",&mes2);
	printf("Digite o ano 2:");
	scanf("%d",&ano2);
	
	if(ano > ano2 || mes>mes2){
		
		printf("Data 1 é maior %d,",);
	}else{
		
		printf("Data 2 é maior");
	}
	
	
}