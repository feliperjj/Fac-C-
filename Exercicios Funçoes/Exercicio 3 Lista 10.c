#include <stdio.h>

int leituraDados(int n);
int main(){
	int cont,n;
	cont = leituraDados(n);
	printf("A quantidade de elementos fornecidos e %d",cont);

	
}	



int leituraDados(int n ){
	
	int cont=0,maior=0,i;
	do{
	
	
	printf("Digite um numero");
	scanf("%d",&n);
	for(i=0;i<=n;i++){

			if(n>maior){
		
		maior = n;
	}
	cont++;
		
	}



	
	
	
	
	
	}while(n!=0);
	printf("O maior e %d:",maior);
	
}