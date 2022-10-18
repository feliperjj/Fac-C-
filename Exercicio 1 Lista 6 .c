#include <stdio.h>
int main(){

int i,n,num,contmult=0,number;

	
	
	printf("Digite one Number");
	scanf("%d",&number);
	
	do{
		printf("Digite um numero:");
		scanf("%d",&num);
		
		if(number%num==0){
			contmult++;
			
		}
		i++;
	}while(i<5);
		printf("O total de multiplos fornecidos e %d",contmult);
		




}