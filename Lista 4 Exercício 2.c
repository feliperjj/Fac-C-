#include <stdio.h>
int main ()

{
	
	int i,j,soma=0;
   j=50	

	for (i=0;i<=50;i++)
	{
		
		printf ("%d %d ", i, j);
			
		//calculando a soma
		soma = soma + i + j;
		
		//atualizando o valor de 'j'
		j--;
	}
	
	//exibindo a soma
	printf ("\n\nSoma: %d", soma);
}
	
	







	
