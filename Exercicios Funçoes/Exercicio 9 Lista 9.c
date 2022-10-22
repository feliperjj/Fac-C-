#include <stdio.h>
int calcula(int n,int soma,int media);

int main(){
	
	int value;
	
	printf("Digite N");
	scanf("%d",&value);
	printf("\n Soma = %d",soma);
	printf("Media = %1.f\n",media);
	
	
	
}
int calcula(int n,int *soma,int *media){
	int i,s=0,quant=0
	for(i=1;i<=n;i++){
		if(n%i==0){
			
			soma+=i;
			quant++
		}
		
		
	}
	*soma=s;
	*media=(float)s/quant;
	
	
}