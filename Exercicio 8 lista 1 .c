#include <stdio.h>

int main(){
	
	char nome,tipo;
	float consumo,diaria,taxa,total,ndiarias,subtot;
	
	printf("Qual o nome do Hospede:");
	scanf("%s",&nome);
	
	printf("Qual o consumo interno:");
	scanf("%f",&consumo);
	
	printf("Qual o numero de diarias:");
	scanf("%f",&ndiarias);
	
	
	printf("Digite o tipo de Apartamento:");
	scanf("%s",&tipo);
	
	switch(tipo){
		
		case 'A':
		case 'a':	
			diaria = 350.00;
		break;
		case 'B':
		case 'b':
		diaria = 275.00;
		break;
		case 'C':
		case 'c':
		diaria = 200.00;
		break;
		case 'D':
		case 'd':
		diaria = 100.00;
		break;	
		default:
			printf("Escolha Invalida!!!");
		
		
	}
	diaria = diaria * ndiarias;
	subtot = diaria+consumo;
	total = diaria+consumo+taxa;
	taxa = diaria-(total * 10)/100;
	
	printf("\n Nome do Cliente: %s" ,nome);
	printf("\n Tipo de Apartamento: %c" ,tipo);
	printf ("\n Numero de diarias utilizadas: %2.f ",ndiarias);
	printf("\n Valor total das diarias: %2.f ",diaria);
	printf("\n O subtotal e: %2.f ",subtot);
	printf("\n O valor da taxa de servico : %2.f ",taxa);
	printf("O total geral e : %2.f",total);
	
	
	
	
	
	
}