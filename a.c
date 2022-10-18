#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int n, i, j, k;
	
	//solicitando o valor de n
	printf ("Entre com o valor de n: ");
	scanf ("%d", &n);
	
	//variando 'i' para controlar as linhas que serão exibidas
	for (i=1;i<=n;i++)
	{
		//escrevendo os valores que vão do número da linha até o número 1
		for (j=i;j>=1;j--)
		{
			printf ("%d ", j);
		}
		
		//escrevendo os 0 de cada linha
		for (k=1;k<=n-i;k++)
		{
			printf ("%d ", 0);
		}
		
		printf ("\n");
	}
}