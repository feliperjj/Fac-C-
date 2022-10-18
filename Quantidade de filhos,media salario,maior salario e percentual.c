#include <stdio.h>


int main(){
	
	int habitantes;
	float salario,mediaSalario=0,mediaFilhos=0,maiorSalario=0,contMil=0,contFilhos=0,somaSalario=0,perc1000;
	printf("Quantos habitantes serao pesquisados");
	scanf("%d",&habitantes);
	
	
	for(i=0;i<=habitantes;i++){
		
		printf("Qual seu salario");
		scanf("%f",&salario);
		printf("Numero de filhos");
		scanf("%d",&filhos);
		somaSalario+= salario;
		contFilhos+= filhos;
		if(salario>maiorSalario){
			
			maiorSalario = salario;
			
		}if(salario <= 1000){
			
			contMil++;
			
		}
	
	
	}
	
	mediaSalario = somaSalario/habitantes;
	mediaFilhos = contfilhos/habitantes;
	perc1000 =(contMil/habitantes)*100;
	
	
	printf("A média de salario da população é: %.2f": mediaSalario);
	printf("A média do número de filhos é :%.2f",mediaFilhos);
	printf("O maior salário é : %.2f",maiorSalario);
	printf("Porcentual de pessoas com o salario ate 1k: %.2f%")
	
	
	
}