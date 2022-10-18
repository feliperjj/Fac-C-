#include <stdio.h>

int main(){
	
	
	
	int n1,n2,a, b, c, resto, menor, meio, maior;
	
	printf("Digite um numero de 1 a 999: \n");
	scanf("%d",&n1);
	
	if ((n1<100)|| (n1> 999)){
		
		
		printf ("Numero Invalido: ");
	}
	else{
	
		
		a = n1/100;			//a: número de centenas
		resto = n1%100;
		b = resto/10;		//b: número de dezenas
		c = resto%10;		//c: número de unidades
		
		//definindo qual é o maior algarismo, assim como o menor e o do meio
		if ((a > b) && (a > c))
		{
			maior = a;
			
			if (b > c)
			{
				meio = b;
				menor = c;
			}
			else
			{
				meio = c;
				menor = b;
			}
		}
		else
		{
			//if ((b > a) && (b > c))
			if (b > c)
			{
				maior = b;
				
				if (a > c)
				{
					meio = a;
					menor = c;
				}
				else
				{
					meio = c;
					menor = a;
				}
			}
			else
			{
				maior = c;
				
				if (a > b)
				{
					meio = a;
					menor = b;
				}
				else
				{
					meio = b;
					menor = a;
				}
			}
		}
		
		//"montar" o número n2
		n2 = menor*100+meio*10+maior;
		
		//exibindo o resultado
		printf ("\nn2 = %d", n2);
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
