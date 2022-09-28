#include <stdio.h>
//Faça um programa que leia um
//número N inteiro, menor ou igual a 18. Se for
//maior do que 18, o programa exibirá uma
//mensagem de erro e terminará a sua
//execução; caso contrário, deverá exibir os
//números no intervalo de 1 a 99 cujos
//algarismos somem N.//
	
	
	
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
	