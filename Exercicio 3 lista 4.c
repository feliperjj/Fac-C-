#include <stdio.h>

int main(){
	
	int invest,anos,i;
	float rend,m;
	printf("Quanto foi investido?");
	scanf("%d",&invest);
	printf("Quanto rende?");
	scanf("%d",&rend);
	printf("Quantos anos ficou?");
	scanf("%d",&anos);
	
	m=anos*12;
	for(i=1;i<=m;i++){
		rend = rend/100*invest;
		invest = invest+rend;
	
		
	}
	
	
	printf("TOTAL :%d",invest);
	
	
}