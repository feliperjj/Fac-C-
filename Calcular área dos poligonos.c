#include <stdio.h>

int main ()
{
	
	float area,raio,lado,base,altura,tri,qua,ret,cir,pi=3.14;
	cir = pi * raio * raio;
	qua = lado*lado;
	ret = base*altura;
	tri = base*altura/2; 
	int escolha;
	
	printf("Qual poligono voce deseja saber a area :");
	scanf("%d",&escolha);

	switch (escolha)
  {
    case 1 :
    printf ("Digite o Raio do Circulo \n : ");
    scanf("%f",&raio);
    printf ("Digite o outro Raio do Circulo \n : ");
    scanf("%f",&raio);
	cir = pi * raio * raio;
	area = cir;
	break;
    
    case 2 :
    printf ("Digite o lado do Quadrado \n : ");
    scanf("%f",&lado);
    printf ("Digite o lado do Quadrado \n : ");
    scanf("%f",&lado);
    qua = lado*lado;
	area = qua;
	break;
    
    case 3 :
    printf ("Digite a Base do retangulo \n : ");
    scanf("%f",&base);
    printf ("Digite a Altura do retangulo \n : ");
    scanf("%f",&altura);
	ret = base*altura;
	area = ret;
	break;
    
    case 4 :
    printf ("Digite a Base do triangulo \n  :  ");
    scanf("%f",&base);
    printf ("Digite a Altura do triangulo \n :  ");
    scanf("%f",&altura);
	tri = base*altura/2; 
	area = tri;
	break;
    
	default:
    	printf("Valor invalido!!!");
	
	
}
    printf("A area do poligono escolhido e AREA = %.2f m2 \n:  ",area);	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
}