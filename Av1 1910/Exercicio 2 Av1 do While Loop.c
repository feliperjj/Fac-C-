#include <stdio.h>


int main(){
	int a ,b,num,i,soma=0,contMenor=0,quant,media,somamaiorB;
	
	
		printf("Entre com o intervalo:");
		scanf("%d",&a);
		scanf("%d",&b);
	

		printf("Digite a quantidade de digitos");
		scanf("%d",&quant);

	i=0;
		do{
				
		printf("Entre com o numero:");
		scanf("%d",&num);
				if(num>a && i<num){
					
					soma+=num;
					media= soma/num;
				}
				if(num<a){
					
					contMenor++;
				}else if(num>b){
					
					somamaiorB+=num;
					
				}
				}while(i<quant);
					i++;		
			


printf("Media dos valores compreendidos entre A e B : %d \n",media);
printf("Quantidade de numeros inferiores a A: %d \n",contMenor);
printf("Soma dos maiores que B:%d \n",somamaiorB);
		
	}
