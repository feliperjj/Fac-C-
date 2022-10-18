#include <stdio.h>
#define c 
#define r 
#define q 
#define t 
int main(){

 int figura,raio,base;
 int altura,lado;
 int acir,aret,aquad,atri;
	
	float pi=3.14;
	printf("Escolha a figura desejada:");
	scanf("%d",&figura);
	
	switch(figura){
		
		case 1:
			printf("Digite o raio:");
			scanf("%d",&raio);
			acir = pi*(raio*raio);
				printf("A area do circulo e %d",acir);
		break;
		case 2:
			printf("Digite a base e altura:");
			scanf("%d %d",&base,&altura);
			aret = base*altura;
			printf("A area do retangulo e %d",aret);
		break;
		case 3:
			printf("Digite a os lados");
			scanf("%d %d",&lado,&lado);
			aquad=lado*lado;
			printf("A area do quadrado e %d",aquad);
		break;
		case 4:
			printf("Digite a base e altura:");
			scanf("%d %d",&base,&altura);
			atri=(base*altura)/2;
			printf("A area do triangulo e %d",atri);
		break;	
		default:
		printf("Escolha inválida");
		
	}


}


