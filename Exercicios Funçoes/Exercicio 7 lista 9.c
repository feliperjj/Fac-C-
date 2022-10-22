#include <stdio.h>



int mult (int n,int a,int b);






int main(){
	
	int a,b,n,cont;

	
  
	
	printf("Digite o intervalo A a B");
	scanf("%d %d",&a,&b);
	
	printf("Digite o valor de n ");
	scanf("%d",&n);
	

cont = mult(n,a,b);

	

	
	
	
	
}

int mult(int n,int a,int b){
	
int i,cont;
	
	for(i=a;i<=b;i++){
		
		if(i%n==0){
			cont++;
			
		}
		printf("%d \n",cont);
	}
	
}