#include <stdio.h>


int main(){
	
	int n,i,termo=1,razao=1;
	
	
	for(i=1;i<=n;i+=i){
		
	printf("%d",termo);
	razao*=2;
	
	termo *= razao;
	}
}
