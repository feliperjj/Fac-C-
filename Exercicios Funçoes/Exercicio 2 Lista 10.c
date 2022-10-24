#include <stdio.h>

int potencia(int a,int b);


int main(){
	int a,b,cont=0;
	printf("Digite o valor de a ");
	scanf("%d",&a);
	printf("Digite b ");
	scanf("%d",&b);
	cont = potencia(a,b);
	
	printf("A quantidade de potencias de 2 e %d \n",cont);
	
}

int potencia(int a,int b){
	int i,cont,maior=0;
	for(i=a;i<=b;i++){
		
		if(i%2==0){
			
			cont++;
		if(i>maior){
			
			maior = i;
		}
		
		}
		
		
	}
	printf("O maior valor e %d",maior);
	
	
}