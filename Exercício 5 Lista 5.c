#include <stdio.h>

int main(){
	
	
	float quantia,troco;
	int cem,cinquenta,vinte,dez,cinco,dois,um;
	
	printf("Insira uma quantia em reais");
	scanf("%f",&quantia);
	
	troco = quantia;


	
	dois = troco/2;
		troco = troco - (dois*2);
	dez = troco/10;
		troco = troco - (dez*10);
	cinco = troco/5;
		troco = troco - (cinco*5);
	vinte = troco/20;
		troco = troco - (vinte*20);
	
	cinquenta = troco/50;
		troco = troco - (cinquenta*50);	
	cem = troco/100;
		troco = troco - (cem*100);
	
	
	printf("Valor decomposto : %d\n",quantia);
    printf("Notas de 100 : %d\n",cem);
    printf("Notas de 50 : %d\n",cinquenta);
    printf("Notas de 20 : %d\n",vinte);
    printf("Notas de 10 : %d\n",dez);
    printf("Notas de 5 : %d\n",cinco);
    printf("Notas de 2 : %d\n",dois);
    printf("Notas de 1 : %d\n",troco);



}
	
	
	
	
	
	
	
	
	
