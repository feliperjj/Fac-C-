#include <stdio.h>
int main(){

int n,i,soma=0;
	
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	for (i=1;i <= n ;i++){
		
		soma+=i;
printf("A soma dos numeros e %d\n\n",soma);		
}

}