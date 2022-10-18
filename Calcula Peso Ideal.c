#include <stdio.h>
int main(){
	
	char genero;
	float altura,peso;
	
	
	printf("Digite seu Genero: ");
	scanf("%c",&genero);
	
	printf ("Digite sua Altura: ");
	scanf("%f",&altura);
	
	switch(genero){
		
		case 'm':
		case 'M':
		peso = (72.7 * altura) - 58;
	break;
	
		
		case 'f':
		case 'F':
		peso = (62.1*altura) - 44.7;

		break;
		default:
			printf("Escolha Invalida!!!");
				
}


printf("Seu peso ideal é: %f",peso);
}