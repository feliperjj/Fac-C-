\*
Implementar um programa que leia um valor inteiro n1. Se este não estiver 
	no intervalo de 100 a 999, uma mensagem deve ser exibida ao usuário informando 
	que o número é inválido e, em seguida, a execução do programa terminará.
	
	Caso o valor esteja no intervalo definido, o programa deverá criar um novo 
	valor n2 (e exibi lo ao final) contendo os mesmos algarismos de n1, porém em 
	ordem crescente.
*/
#include <stdio.h>
int main(){
	
	int n1,n2;
	
	
	printf("Digite o n1:");
	scanf("%d",&n1);
	
	if(n1>100 || n1<=999){
		
		n2 = n1;
		
			
		
		}else{
			
			printf("Numero inválido");
			
		}
	
	
	
	
	
	
	
	
	
	
	
	
}