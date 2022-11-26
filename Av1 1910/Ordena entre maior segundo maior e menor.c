#include <stdio.h>


int mmc (float n1, int n2,int *maior,int *menor);


void main ()
{
	int  valor2,maior,menor;
	
	
	float valor1;
	
	printf ("Entre com dois numeros: ");
	scanf ("%f %d", &valor1, &valor2);
	mmc(valor1,valor2,&maior,&menor);
	printf("Os numeros digitados foram %f %d e o resultado : %d e %d",valor1,valor2,mmc(valor1,valor2,&maior,&menor),menor);



}

int mmc (float n1, int n2,int *maior,int *menor)
{
	
int j;
int i;	


	
	//determinando o maior entre n1 e n2
			if(n1<n2)
			{
			return -1;
		}
	
	for (i=n1,j=i+n2;i>=0;i--,j+=n2)
	{
		//verificando se 'i' é múltiplo dos dois números
		if(i%n2==0) 
		{
			*menor=j; //retornando o resultado
			return i;
			
		}
	}


	
}

	
																								
	
