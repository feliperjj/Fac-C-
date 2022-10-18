#include <stdio.h>

int main (){
	
	int num,centena,dezena,unidade,resto,casa;
	float media;
	
	printf("O numero tera quantas casas decimais?");
	scanf("%d",&casa);
	
	if(num<10000){
		
	printf("Digite um numero");
	scanf("%d",&num);
		
	}else{
		printf("Digite um valor a baixo de 10k:");
	}	
	
	centena=num/100;
	resto = num%100;
	dezena=resto/10;
	unidade=resto%10;
	
	
	media = (centena+dezena+unidade)/casa;
	
	
	printf("A media e:%.2f",media);
	
	
	
	
	
	
}