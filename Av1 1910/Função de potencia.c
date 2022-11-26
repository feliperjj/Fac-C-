#include <stdio.h>

int quest04 (int n,int s);
int potencia (int base, int expoente);
int fatorial (int n);


int main(){
	
 int n,s;
 float resultado;
 printf("Digite N:");
	scanf("%d",&n);
	
	resultado =quest04(n,s);
	printf ("\n = %.1f", resultado);

	
}
int quest04 (int n,int s){
	
	int i;
	for(i=0;i<n;i++){
		s += (float)potencia(n,i)/n-potencia(n,i)/n-i+potencia(n,i)/n-i+n*n ;
		

	}
		return s;
	
}

int potencia (int base, int expoente)
{

	int pot = 1, i;
	

	for (i=1;i<=expoente;i++)
	{
		pot *= base;
	}
	

	return pot;
}
