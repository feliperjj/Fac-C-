#include <stdio.h>

int exibe(int n);


int main(){
	
	int n;
	
	printf("Digite N");
	scanf("%d",&n);
	
	
	
	printf("%d",exibe(n));
	
	
}


int exibe(int n){
	
	int i,j;
	
	for(i=1;i<=n;i++){
		for(j=2;j<=n;j++){
			
		printf("%d %d\n",i,j);	
		}
		
		
		
	}
	
	
	
	
}