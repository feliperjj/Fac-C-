#include <stdio.h>
int loja(int codigo,float valor,int quantidade);

int main(){
	int codigo,valor,quantidade;
	
	return loja(codigo,valor,quantidade);
	
}


int loja(int codigo,float valor,int quantidade){
	float total;
	printf("Digite o codigo do produto:");
	scanf("%d",&codigo);
	printf("Digite quantidade:");
	scanf("%d",&quantidade);
	switch(codigo){
		

	
	case 101:
		valor = 3.50;
		break;
			case 102:
		valor = 5.00;
		break;
			case 103:
		valor = 7.80;
		break;
			case 104:
		valor = 5.00;
		break;
			case 105:
		valor = 8.20;
		break;
			case 106:
		valor = 6.40;
		break;
			case 107:
		valor = 4.75;
		break;
			case 108:
		valor = 3.60;
		break;
			case 109:
		valor = 6.00;
		break;
			case 110:
		valor = 4.30;
		break;
		
		default:
		return valor = -1;
		break;		
		
		}
		total = valor*quantidade;
		printf("O valor a ser cobrado: %.2f",total);
		
}
