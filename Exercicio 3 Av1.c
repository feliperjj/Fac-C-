#include <stdio.h>


int main(){
	
	
	
	int num,contpares=0,contTotal=0,maior=0,i;
	float media;
	
	
	for(i=0;num!=10 && num!=20 && num!=30;i++){
		
		printf("Digite um numero");
		scanf("%d",&num);
	if(num!=10 && num%2==0){
		
		contpares++;
		media=contpares/num;
	}
	if(num>10 && num<20){
					
		if(num>maior){
		
		
			maior = num;
					}
	}
	
	contTotal++;
		
	}
	
	printf("\n");
	printf("Total de valores fornecidos  :%d",contTotal);
	printf("\n Maior numero fornecido entre a ocorrencia:%d \n",maior);
	printf("Media dos valores pares antes da ocorrencia do 10:\n %.2f",media);
	
	
	
	
	
	
}



