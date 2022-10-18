#include <stdio.h>



int main ()
{
	
	int dia,mes,ano,dia2,mes2,ano2;


	printf("Digite o dia de 1 a 31: ");
	scanf ("%d",&dia);
	
	printf("Digite  o mes de 1 a 12: ");
	scanf ("%d",&mes);
	
	printf("Digite o ano: ");
	scanf("%d",&ano);	
	
	printf("\n");
	
	printf("Digite o dia de 1 a 31: ");
	scanf ("%d",&dia2);
	
	printf("Digite  o mes de 1 a 12: ");
	scanf ("%d",&mes2);
	
	printf("Digite o ano: ");
	scanf("%d",&ano2);	
	
	
	if (ano > ano2 || ano == ano2 && (mes > mes2 || (mes == mes2 && dia > dia2)))
	{
	
	printf("A maior data e %d / %d / %d \n", dia,mes,ano);

	}
	else if(ano < ano2 || ano == ano2 && (mes < mes2 || (mes == mes2 && dia < dia2))) {
	
	printf("A maior data e %d / %d / %d \n", dia2,mes2,ano2);
	
	}
	else { 
		
		printf("As datas são iguais",dia,mes,ano);
	}
	printf("\n \n");
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
}
