#include <stdio.h>
#define CONT 10
                //UESTÃO 04: Faça um programa que leia
//úmeros reais. Ao final, devem ser300
//ibidas as seguintes informações:
// A quantidade de valores negativos
//gitados;
// A média dos valores positivos.
   
int main(){
	
	
	
	int i,n;
	int contpar,contimpar;
	
	
	for(i=0;i<=CONT;i++){
		printf("Digite o valor de n ");
		scanf("%d",&n);
		if(i%2==0){
			
			
			contpar++;
		}else{
			
			
			contimpar++;
		}
		
	
		
	}
	
	
	printf(" PARES:%d",contpar);
	printf("Impares:%d ",contimpar);
	
	
}
