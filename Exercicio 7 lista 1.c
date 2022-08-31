#include <stdio.h>

int main()
{
	
	
	float valor,horas,salario;
	
	printf("Digite a Quantidade de Horas Trabalhadas: ");
	scanf("%f",&horas);
	
	printf("Qual o valor da hora: ");
	scanf("%f",&valor);
	salario = valor*horas;
	if(horas <= 40 ){
	
	salario = valor;
	
	}
	else(horas > 40);
	
	salario =40*valor +(horas - 40) * valor * 1.5;
	


printf("Seu Salario e: %2.f: ",salario);
}
