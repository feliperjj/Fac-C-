#include <stdio.h>

void questao08 (int n)
{
	int i,j,cont;
	
	for(i=2;i<=n;i++)
	{
		cont=0;
		for (j=i;j<=i;j++)
		{
			if (i%j ==0)
			{
				cont++;
			}
		}
		}
		if (cont ==2)
		{
			printf("%d",i);
		}
	}
	int main ()
	{
	
	int n;
	printf("Entre com um numero");
	scanf("%d",&n)
	
}
