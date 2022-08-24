#include <stdio.h>

int main(){
	
	
	
	
	int i,countneg=0,contpos=0;
	float numero,media,soma;
	
	
	
	for (i=0; i <=5;i++){
		printf("Digite um Numero: ");
		scanf("%f",&numero);
		if(numero < 0){
			
			countneg++;
		
		}else{
			
		 if(numero>0){
			soma += numero;
			
			contpos++;
			
			
			
		}
	}

		
	}
		media = soma / contpos;
		printf("O numero de negativos digitados e %d ",countneg);	
		printf("a media dos positivos  e %f ",media);	
	
	
	
	
	
	
	
	
}