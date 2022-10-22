#include <stdio.h>

int fibo(int n);
int main(){
	
	
int a,b,n;

printf("Digite um numero: ");
scanf("%d",&n);
	
	
	
	printf("O termo %d e: %d\n",n,fibo(n));
	
	
}





int fibo(int n){
	
int anterior = 0,proximo=1,aux,i;
	

if(n==1){
	
	return 0;
}else if (n==2){
	
	return 1;
}else{
	for(i=3;i<=n;i++){
		
		aux=proximo;
		proximo=anterior+proximo;
		anterior = aux;
	}
	return proximo;
}

}
	
	
	
	
	
	
	
	
