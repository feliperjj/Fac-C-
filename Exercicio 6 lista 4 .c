#include <stdio.h>

int main (){
	
	
	int n,i,dezena,unidade;
	
	printf("Digite o numero: ");
	scanf("%d",&n);
	
	if ((n < 1)|| (n > 18)){
		
		printf("Erro");
		
	}else{
		
		for (i=1;i<=99;i++){
			
			dezena = i/10;
			unidade = i%10;
		if(dezena+unidade == n){
			printf("\n %d",i);
	
			}
			
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}