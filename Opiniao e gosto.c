#include <stdio.h>


int main (){
	
	
	int i,limite=2,mat,menorVinte=0,contFe=0,contH=0,salario,idade;
	char genero;
	float media;
	printf("Qual a quantidade de funcionarios entrevistados:");
	scanf("%d",&limite);
	for(i=1;i<=limite;i++){
		
		printf("Qual a sua matricula:");
		scanf("%d",&mat);
		printf("Qual a seu genero [M/F]:");
		fflush(stdin);
		scanf("%c",&genero);
		genero = toupper (genero);
		printf("Qual a sua idade:");
		scanf("%d",&idade);
		printf("Qual a seu salario:");
		scanf("%d",&salario);
		
		if(idade<= 21){
			
			menorVinte++;
		}if(genero == 'F'){
		
		contFe++;
	}else if(genero == 'M'){
		
		contH++;
		media = salario / contH;
	}if(tempo>maior){
		
		tempo = maior;
	}	
	
} 
	printf("Quantidade de funcionarios com menos de 21: %d ",menorVinte);
	printf("Quantidade de funcionarias genero feminino: %d ",contFe);
	printf("Media salarial dos homens:%d",media);

}
	
	
	
