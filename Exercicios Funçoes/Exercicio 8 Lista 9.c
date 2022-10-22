#include <stdio.h>

int primo(int n);

int main(){
	int n;
	
	printf("Digite o valor de n ");
	scanf("%d",&n);
	printf("%d",primo (n));
	
	
}


int primo(int n){
	int i;
	
	for(i=0;i<=n;i++){
		
		if((i%n==0) && (i%1==n)){
			
			
			printf("%d",n);
		}
		
	}
}


	

			
		
		
	
	
	
	
	
	
